/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 16:30:33 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 16:25:28 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int number = 196;
	int sqrt = ft_sqrt(number);
	printf("%d\n",sqrt);
}