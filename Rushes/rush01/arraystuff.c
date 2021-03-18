/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   arraystuff.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 16:40:51 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/23 19:27:28 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_i = 0;
int g_l = 8;
int g_r = 12;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	arrayfill2(int x, int y, char array[6][6], char *str)
{
	if ((x >= 1 && x <= 4) && (y == 0 || y == 5))
	{
		array[x][y] = str[g_i];
		g_i++;
	}
	else if ((x == 0) && (y >= 1 && y <= 4))
	{
		array[x][y] = str[g_l];
		g_l++;
	}
	else if ((x == 5) && (y >= 1 && y <= 4))
	{
		array[x][y] = str[g_r];
		g_r++;
	}
	else
		array[x][y] = 32;
}

void	arrayfill(char array[6][6], char *str)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			arrayfill2(x, y, array, str);
			x++;
		}
		y++;
	}
}

void	arraydisplay(char array[6][6])
{
	int		x;
	int		y;
	char	t;

	y = 1;
	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
			t = array[x][y];
			if (array[x][y] == '\0')
				ft_putchar(t);
			else
			{
				ft_putchar(t);
			}
			if (x == 4)
				write(1, "\n", 1);
			x++;
		}
		y++;
	}
}
