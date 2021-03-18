/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   arrayfill.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:48:35 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 22:12:22 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*fileget(char *file, int size, char *soloarray)
{
	int		fd;
	char	*buf;
	int		rbytes;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		write(1, "map error\n", 10);
	buf = (char *)malloc(sizeof(char) * size);
	rbytes = read(fd, buf, size);
	if (rbytes == size)
	{
		close(fd);
		free(buf);
		size = size * 2;
		fileget(file, size, soloarray);
	}
	else
	{
		close(fd);
		soloarray = buf;
		free(buf);
	}
	soloarray[rbytes] = '\0';
	return (soloarray);
}

int		rowcheck(char *array, int size[2], int i)
{
	int temp;
	int x;

	x = 1;
	temp = ft_strlen(array, i + x);
	size[1] = temp;
	while (x <= size[0])
	{
		i = temp + i;
		x++;
		if (temp != size[1])
			return (-1);
		temp = ft_strlen(array, i + x);
	}
	return (0);
}

int		newlinecheck(char *array, int size[2], int i, char signs[3])
{
	int temp;
	int newline;

	temp = 0;
	newline = 0;
	signs[0] = array[i - 3];
	signs[1] = array[i - 2];
	while (array[temp] != '\0')
	{
		temp++;
		if (array[temp] == '\0' && array[temp - 1] != '\n')
			return (-1);
		if (array[temp] != array[i - 3] && array[temp] != array[i - 2] &&
			array[temp] != '\n' && array[temp] != '\0' && temp > i)
			return (-1);
		if (array[temp] == '\n' && array[temp - 1] == '\n')
			return (-1);
		if (array[temp] == '\n')
			newline++;
	}
	size[0] = ft_atoi(array, i);
	if (size[0] != (newline - 1))
		return (-1);
	return (rowcheck(array, size, i));
}

int		errorcheck(char *array, int size[2], char signs[3])
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (array[i] != '\0')
	{
		if (array[i] == '\n' && i < 4)
			return (-1);
		else if (array[i] == '\n' && i >= 4)
			break ;
		i++;
	}
	if (array[i - 3] == array[i - 2] || array[i - 3] == array[i - 2]
	|| array[i - 2] == array[i - 1])
		return (-1);
	while (j < (i - 3))
	{
		if (array[j] < 32 || array[j] > 126)
			return (-1);
		j++;
	}
	signs[2] = array[i - 1];
	signs[3] = '\0';
	return (newlinecheck(array, size, i, signs));
}

int		arrayerror(int size[2], char signs[3], char *file)
{
	int		error;
	char	*soloarray;

	soloarray = NULL;
	soloarray = fileget(file, BUFF_SIZE, soloarray);
	error = errorcheck(soloarray, size, signs);
	if (error == -1)
	{
		write(1, "map error\n", 12);
		return (-1);
	}
	return (1);
}
