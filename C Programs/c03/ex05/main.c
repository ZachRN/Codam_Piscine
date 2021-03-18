/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 09:33:45 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/01 13:02:19 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[100] = "sadt";
	char src[100] = "dasdsdasdasdsddsTt";
	unsigned int n = 7;

	printf("%lu\n", strlcat(dest,src,n));
	printf("mine: %u\n", ft_strlcat(dest, src, n));
}