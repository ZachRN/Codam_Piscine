/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/13 09:12:50 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/17 15:23:29 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char x;

	x = 122;
	while (x > 96)
	{
		write(1, &x, 1);
		x--;
	}
}
