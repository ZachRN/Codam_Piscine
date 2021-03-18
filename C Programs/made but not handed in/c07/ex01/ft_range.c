/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 09:43:39 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/27 14:18:16 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
