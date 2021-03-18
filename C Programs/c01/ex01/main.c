/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 17:34:42 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/15 17:44:44 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int nbr;
	int *nbr2;
	int **nbr3;
	int ***nbr4;
	int ****nbr5;
	int *****nbr6;
	int ******nbr7;
	int *******nbr8;
	int ********nbr9;
	int *********nbr10;

	nbr = 0;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	nbr10 = &nbr9;

	ft_ultimate_ft(nbr10);
	printf("%d",nbr);
}

