/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 15:01:07 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 16:22:02 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int nb = 4;
	int power = 4;
	int number;
	number = ft_iterative_power(nb,power);
	printf("%d\n",number);
}