/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 18:25:10 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/15 18:29:54 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 15;
	b = 10;
	ft_div_mod(a, b, &div, &mod);

	printf("Divved: %d\nModded: %d",div,mod);
}
