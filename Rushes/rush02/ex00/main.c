/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 10:25:23 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/31 11:24:58 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int		ft_parse(char *str, char *nbr, int power);


int		ft_strlen(char *str)
{
	int i;
	int flag;
	int realvalue;

	i = 0;
	flag = 0;
	realvalue = 0;
	while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
				return (-1);
			if (str[i] != '0' && flag == 0)
				flag = 1;
			if (flag == 1)
				realvalue++;
			i++;
		}
	return (realvalue);
}

int		main(int argc, char *argv[])
{
	int len;
	int error;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		error = ft_parse("numbers.dict", argv[1], len);
	}
	else if (argc == 3)
	{
		len = ft_strlen(argv[2]);
		error = ft_parse(argv[1], argv[2], len);
	}
	else 
	{
		write(1, "thats an error dude", 20);
		return (0);
	}
	return (0);
}