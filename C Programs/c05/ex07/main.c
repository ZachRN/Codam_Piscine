/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 16:58:29 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 16:28:36 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int number = 30;
	printf("%d\n", ft_find_next_prime(number));
}
