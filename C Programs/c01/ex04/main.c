/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 18:42:03 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/15 18:45:50 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 15;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("Divided: %d\nModded: %d",a ,b );
}

