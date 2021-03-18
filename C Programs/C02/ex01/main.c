/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 10:48:53 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/26 08:51:29 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[30];
	char src[];
	unsigned int n = 25;

	printf("%s\n",strncpy(dest,src,n));
	printf("%s\n",ft_strncpy(dest,src,n));

}

