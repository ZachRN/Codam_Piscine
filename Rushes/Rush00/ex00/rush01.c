/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 13:17:47 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/16 15:56:25 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	charcheck(int x, int y, int h, int w)
{
	if ((w == 1 && h == 1) || (w == x && h == y && w > 1))
	{
		ft_putchar('/');
	}
	if ((w == x && h == 1 && w > 1) || (w == 1 && h == y && h > 1))
	{
		ft_putchar('\\');
	}
	if ((h == 1 || h == y) && (w != 1 && w != x))
	{
		ft_putchar('*');
	}
	if ((w == 1 || w == x) && (h > 1 && h < y))
	{
		ft_putchar('*');
	}
	if ((w > 1 && w < x) && (h > 1 && h < y))
	{
		ft_putchar(' ');
	}
	if (w == x)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int w;
	int h;

	w = 1;
	h = 1;
	if (x > 0 && y > 0 )
	{
		while (h <= y)
		{
			w = 1;
			while (w <= x)
			{
				charcheck(x, y, h, w);
				w++;
			}
			h++;
		}
	}
}
