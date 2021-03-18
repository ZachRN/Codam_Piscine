/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 07:54:15 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/19 07:55:56 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[]= "TESTERONI";
	char str2[] = "round 3 test";

	printf("%s\n",ft_strlowcase(str));
	printf("%s\n",ft_strlowcase(str2));
}

