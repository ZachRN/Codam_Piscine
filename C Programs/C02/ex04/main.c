/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 13:36:52 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/18 13:38:43 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char *str = "abchduhasidhais";
	char *str2 = "tEST";
	char *str3 = "testround4";

	printf("%d\n",ft_str_is_lowercase(str));
	printf("%d\n",ft_str_is_lowercase(str2));
	printf("%d\n",ft_str_is_lowercase(str3));
}
