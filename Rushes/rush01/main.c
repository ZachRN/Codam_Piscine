/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/22 16:15:48 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/23 19:14:15 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		errorcheck(char *str, int size);
void	arrayfill(char array[6][6], char *str);
void	arraydisplay(char array[6][6]);
void 	input_compare(char array[6][6]);

void	ft_strcpy(char *src, char *dest)
{
	int i;
	int x;

	x = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] != 32)
		{
			dest[x] = src[i];
			x++;
		}
		i++;
	}
	dest[16] = '\0';
}

// "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

int		main(int argc, char *argv[])
{
	char	text[17];
	char	array[6][6];
	int		cont;

	ft_strcpy(argv[1], text);
	cont = errorcheck(text, argc);
	if (cont == -1)
		return (0);
	arrayfill(array, text);
	input_compare(array);
	arraydisplay(array);
}
