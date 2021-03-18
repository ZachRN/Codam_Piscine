/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 07:58:23 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/27 11:31:08 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[13] = "bwa";
	char src[100] = "testtesT";

	printf("%s\n", strcat(dest, src));
	printf("%s\n", ft_strcat(dest, src));
}
