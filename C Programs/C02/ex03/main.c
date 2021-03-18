/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:19:02 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/18 11:23:42 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char *str = "0123485";
	char *str2 = "test132";
	char *str3 = "";

	printf("%d\n",ft_str_is_numeric(str));
	printf("%d\n",ft_str_is_numeric(str2));
	printf("%d\n",ft_str_is_numeric(str3));
}
