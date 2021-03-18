/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 14:07:45 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/27 14:18:07 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int min = 19;
	int max = 20;
	int i = 0;
	int *array;

	array = ft_range(min, max);
	while (i < 10)
	{
		printf("%d", array[i]);
		printf("\n");
		i++;
	}
	free(array);
}
