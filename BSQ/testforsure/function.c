/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   function.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:56:18 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 15:37:29 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str, int counter)
{
	int i;

	i = 0;
	while (str[counter] != '\n' && str[counter] != '\0')
	{
		counter++;
		i++;
	}
	return (i);
}

int		ft_atoi(char *str, int x)
{
	int i;
	int value;

	value = 0;
	i = 0;
	while (i < x && (str[i] >= '0' && str[i] <= '9'))
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	if (value == 0)
		value = -1;
	return (value);
}

int		outoflines(char *soloarray)
{
	int i;

	i = 0;
	while (soloarray[i] != '\0')
	{
		if (soloarray[i] == '\n' && i < 4)
			return (-1);
		else if (soloarray[i] == '\n' && i >= 4)
			break ;
		i++;
	}
	return (i);
}
