/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   arraystuff.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 17:26:41 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 16:49:58 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_arraydisplay(char **array, int size[2])
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < size[0])
	{
		x = 0;
		while (x < size[1])
		{
			write(1, &array[y][x], 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

char	**ft_arrayfill2(char **array, int size[2], char *soloarray, int counter)
{
	int x;
	int y;
	int temp;

	y = 0;
	temp = counter;
	while (y < size[0])
	{
		x = 0;
		while (x < size[1])
		{
			array[y][x] = soloarray[counter];
			x++;
			counter++;
			if (soloarray[counter] == '\n')
			{
				counter++;
				break ;
			}
		}
		y++;
	}
	return (array);
}

char	**ft_arrayfill(char **array, int size[2], char *file)
{
	int		i;
	char	*soloarray;

	i = 0;
	soloarray = NULL;
	soloarray = fileget(file, BUFF_SIZE, soloarray);
	while (soloarray[i] != '\0')
	{
		if (soloarray[i] == '\n')
			break ;
		i++;
	}
	i++;
	return (ft_arrayfill2(array, size, soloarray, i));
}
