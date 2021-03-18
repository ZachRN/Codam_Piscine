/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 17:45:59 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/15 18:16:49 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 50;
	b = 100;

	ft_swap(&a, &b);
	printf("A is now %d, and B is now %d",a,b);
}
