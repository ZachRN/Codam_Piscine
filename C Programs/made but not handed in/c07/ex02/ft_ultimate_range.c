/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 14:23:49 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/27 17:23:59 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int value;

	i = 0;
	value = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (value);
}
