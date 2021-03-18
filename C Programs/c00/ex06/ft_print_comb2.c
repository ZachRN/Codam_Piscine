/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/13 13:08:19 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/19 08:44:07 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_mass(int firstnum, int secondnum)
{
	char *letters;

	letters = "0123456789";
	write(1, &letters[firstnum / 10], 1);
	write(1, &letters[firstnum % 10], 1);
	write(1, " ", 1);
	write(1, &letters[secondnum / 10], 1);
	write(1, &letters[secondnum % 10], 1);
	if (firstnum < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int firstnum;
	int secondnum;

	firstnum = 0;
	while (firstnum <= 98)
	{
		secondnum = firstnum + 1;
		while (secondnum <= 99)
		{
			if (firstnum < secondnum)
			{
				print_mass(firstnum, secondnum);
				secondnum++;
			}
		}
		firstnum++;
	}
}
