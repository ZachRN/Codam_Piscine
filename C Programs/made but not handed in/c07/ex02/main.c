/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 15:59:43 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/27 17:23:27 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int min = 10;
	int max = 20;
	int i = 0;
	int *range = NULL;
	int value;

	value = ft_ultimate_range(&range, min, max);
	if (value == 0)
	{
		printf("0");
		free(range);
		return (0);
	}
	if (value == -1)
	{
		printf("-1");
		free(range);
		return (0);
	}
	while (i < 10)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
