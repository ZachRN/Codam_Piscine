/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:04:18 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/18 11:24:07 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char *str = "WoooHoooo!";
	char *str2 = "Waaaaa";
	char *str4 = "1@#$DAS";

	printf("%d\n",ft_str_is_alpha(str));
	printf("%d\n",ft_str_is_alpha(str2));	
	//printf("%d\n",ft_str_is_alpha(str3));
    printf("%d\n",ft_str_is_alpha(str4));
}

