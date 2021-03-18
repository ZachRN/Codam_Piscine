/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 14:27:47 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 16:19:54 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int nb = 8;

	nb = ft_recursive_factorial(nb);
	printf("%d\n", nb);
}