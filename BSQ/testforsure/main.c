/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/28 14:35:45 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 22:11:52 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_strmalloc(char **array, int size[2])
{
	int	i;

	i = 0;
	array = malloc(size[0] * sizeof(char*));
	while (i < size[0])
	{
		array[i] = malloc(size[1] * sizeof(char));
		i++;
	}
	return (array);
}

void	ft_strfree(char **array, int *size)
{
	int i;

	i = 0;
	while (i < size[0])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	readstdinput(char **array, int size[2], char signs[3])
{
	char	soloarray[8000000];
	int		save[4];

	save[0] = 0;
	read(0, soloarray, 8000000);
	save[1] = outoflines(soloarray);
	size[0] = ft_atoi(soloarray, (save[1] - 3));
	save[2] = save[1] + 1;
	while (save[0] < size[0])
	{
		save[3] = read(0, soloarray + save[2], 8000000);
		save[0]++;
		save[2] += save[3];
	}
	soloarray[save[2]] = '\0';
	if (errorcheck(soloarray, size, signs) == -1)
		write(1, "map error\n", 12);
	if (errorcheck(soloarray, size, signs) == -1)
		exit(1);
	array = ft_strmalloc(array, size);
	ft_arrayfill2(array, size, soloarray, (save[1] + 1));
	get_solution(array, signs, size);
	ft_arraydisplay(array, size);
	ft_strfree(array, size);
}

void	linesaver(char **array, int size[2], char *str, char signs[3])
{
	array = ft_strmalloc(array, size);
	ft_arrayfill(array, size, str);
	get_solution(array, signs, size);
	ft_arraydisplay(array, size);
	ft_strfree(array, size);
}

int		main(int argc, char *argv[])
{
	char	**array;
	int		size[2];
	char	signs[3];
	int		i;
	int		error;

	i = 1;
	array = NULL;
	if (argc != 1)
	{
		while (i < argc)
		{
			error = arrayerror(size, signs, argv[i]);
			if (error != -1)
			{
				linesaver(array, size, argv[i], signs);
			}
			i++;
			if (argc > 2)
				write(1, "\n", 1);
		}
	}
	else
		readstdinput(array, size, signs);
	exit(1);
}
