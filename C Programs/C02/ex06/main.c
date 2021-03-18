/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 16:37:38 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/18 16:41:07 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char *str = "testTESITIHIDHSAIHDIASHDIbasidbiasndi s,sad,.ad,1";
	char *str2 = "test\n";

	printf("%d\n",ft_str_is_printable(str));
	printf("%d\n",ft_str_is_printable(str2));
}

