/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 15:57:54 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 16:24:08 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int index = 50;
	int number;
	number = ft_fibonacci(index);
	printf("%d\n",number);
}