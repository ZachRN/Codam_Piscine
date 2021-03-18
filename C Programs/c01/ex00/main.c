/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 12:42:09 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/15 13:25:38 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int nbr;
	int *bignbr;
	
	nbr = 0;
	bignbr = &nbr;
	ft_ft(bignbr);
	printf("%d",nbr);
}
