/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 12:39:15 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/24 11:39:37 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char*src);

int		main(void)
{
	char dest[30];
	char src[] = "helpppppppppme";

	printf("%s\n", ft_strcpy(dest,src));
	printf("%s\n", ft_strcpy(dest, src));
}
