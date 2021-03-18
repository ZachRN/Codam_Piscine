/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:14:52 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/25 16:00:45 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char src[] = "bwaaaaa";
	char *test;

	test = ft_strdup(src);
	printf("%s\n", src);
	printf("%s\n", test);
	free(test);
}