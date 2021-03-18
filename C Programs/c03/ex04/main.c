/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 09:30:35 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/31 19:02:11 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "This is a really long string just to test";
	char to_find[] = "string";
	char *yay;

	yay = ft_strstr(str, to_find);
	printf("%s\n", yay);
	printf("%s\n", strstr(str, to_find));
}
