/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 13:41:17 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/18 13:42:46 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char *str="TEST";
	char *str2="tEST";
	char *str3 = "T3";

	printf("%d\n",ft_str_is_uppercase(str));
	printf("%d\n",ft_str_is_uppercase(str2));
	printf("%d\n",ft_str_is_uppercase(str3));
}

