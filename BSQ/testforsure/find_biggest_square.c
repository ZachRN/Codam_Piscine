/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_biggest_square.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: fholwerd <fholwerd@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:41:02 by fholwerd      #+#    #+#                 */
/*   Updated: 2020/09/01 18:52:10 by fholwerd      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		gv(int **mapn, int x, int y)
{
	if (x < 0 || y < 0)
		return (0);
	else
		return (mapn[y][x]);
}

void	get_first_square(char **map, char signs[3], int *size, int *square)
{
	int x;
	int y;

	y = 0;
	while (y < size[0])
	{
		x = 0;
		while (x < size[1])
		{
			if (map[y][x] == signs[0])
			{
				square[0] = x;
				square[1] = y;
				square[2] = 0;
				return ;
			}
			x++;
		}
		y++;
	}
}

int		find_square(int size[2], int **m, int *square, int ns)
{
	int x;
	int y;
	int magic;

	x = square[0];
	y = square[1];
	while (y + ns < size[0])
	{
		while (x + ns < size[1])
		{
			magic = gv(m, x + ns, y + ns) - gv(m, x - 1, y + ns) -
					gv(m, x + ns, y - 1) + gv(m, x - 1, y - 1);
			if (magic == 0)
			{
				square[0] = x;
				square[1] = y;
				square[2] = ns;
				return (1);
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}

void	fill_map(char **map, char signs[3], int square[2])
{
	int i;
	int j;

	i = square[0];
	while (i <= square[0] + square[2])
	{
		j = square[1];
		while (j <= square[1] + square[2])
		{
			map[j][i] = signs[2];
			j++;
		}
		i++;
	}
}

void	find_biggest_square(char **map, char signs[3], int size[2], int **mapn)
{
	int *square;

	square = malloc(sizeof(int) * 3);
	square[0] = 0;
	square[1] = 0;
	square[2] = 0;
	get_first_square(map, signs, size, square);
	while (1)
	{
		if (find_square(size, mapn, square, square[2] + 1) == 0)
			break ;
	}
	fill_map(map, signs, square);
	free(square);
}
