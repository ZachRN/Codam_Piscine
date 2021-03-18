/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/13 09:28:56 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/17 11:46:05 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pleasewrite(int i[3])
{
	char *x;

	x = "0123456789";
	write(1, &x[i[0]], 1);
	write(1, &x[i[1]], 1);
	write(1, &x[i[2]], 1);
	if (i[0] != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int i[3];

	i[0] = 0;
	while (i[0] <= 7)
	{
		i[1] = i[0] + 1;
		while (i[1] <= 8)
		{
			i[2] = i[1] + 1;
			while (i[2] <= 9)
			{
				if (i[0] < i[1] && i[1] < i[2])
				{
					pleasewrite(i);
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
