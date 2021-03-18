/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 07:58:23 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/02 15:21:58 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = "dest";
	char s2[] = "dtest";
	unsigned int n = 1;

	printf("%d\n",strncmp(s1,s2,n));
	printf("%d\n", ft_strncmp(s1, s2, n));
}
