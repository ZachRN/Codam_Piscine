/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 07:58:23 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/26 14:23:28 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = "fsd";
	char s2[] = "";

	printf("%d\n",strcmp(s1,s2));
	printf("%d\n", ft_strcmp(s1, s2));
}
