/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 15:07:23 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 14:55:36 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int nb = 3;
	int power = 8;
	int number;

	number = ft_recursive_power(nb, power);
	printf("%d\n", number);
}
