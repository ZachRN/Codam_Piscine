/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_solution.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: fholwerd <fholwerd@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/28 14:33:32 by fholwerd      #+#    #+#                 */
/*   Updated: 2020/09/01 18:53:13 by fholwerd      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	add_obstacle_number(int **mapn, int i, int k, int size[2])
{
	int j;

	j = k;
	while (i < size[0])
	{
		j = k;
		while (j < size[1])
		{
			mapn[i][j] += 1;
			j++;
		}
		i++;
	}
}

void	detect_obstacle(char **map, char signs[3], int size[2], int **mapn)
{
	int i;
	int j;

	i = 1;
	while (i < size[0])
	{
		j = 1;
		while (j < size[1])
		{
			if (map[i][j] == signs[1])
				add_obstacle_number(mapn, i, j, size);
			j++;
		}
		i++;
	}
}

void	fill_number_map(char **map, char signs[3], int size[2], int **mapn)
{
	int i;
	int j;

	i = 0;
	while (i < size[0])
	{
		j = 0;
		while (j < size[1])
		{
			mapn[i][j] = 0;
			j++;
		}
		i++;
	}
	detect_obstacle(map, signs, size, mapn);
}

void	get_solution(char **map, char signs[3], int size[2])
{
	int **mapn;
	int i;

	mapn = malloc((size[0]) * sizeof(int*));
	i = 0;
	while (i < size[0])
	{
		mapn[i] = malloc((size[1]) * sizeof(int));
		i++;
	}
	fill_number_map(map, signs, size, mapn);
	find_biggest_square(map, signs, size, mapn);
	i = 0;
	while (i < size[0])
	{
		free(mapn[i]);
		i++;
	}
	free(mapn);
}
