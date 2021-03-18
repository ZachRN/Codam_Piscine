/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 07:58:23 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/27 09:17:58 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[15] = "sad";
	char src[100] = "testtesT";
	unsigned int n = 6;

	printf("%s\n", strncat(dest,src,n));
	//printf("%s\n", ft_strncat(dest, src, n));
}
