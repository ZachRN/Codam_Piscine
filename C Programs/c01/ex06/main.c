/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 18:52:33 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/15 19:06:21 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str;
	int count;

	str = "PLEASE DEAR GOD HELP ME";
	count = ft_strlen(str);
	printf("%d",count);
}
