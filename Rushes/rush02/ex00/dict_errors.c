/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dict_errors.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 11:17:56 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/08/30 21:11:51 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MIN_LINES 41

void	ft_print_dict_error(void)
{
	write(1, "Dict Error.\n", 12);
}

int		ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int		ft_line_counter(char *dict)
{
	int i;
	int num_lines;

	i = 0;
	num_lines = 0;
	while (dict[i] != '\0')
	{
		if (dict[i] == '\n')
			num_lines++;
		i++;
	}
	return (num_lines);
}

int		ft_dict_error(char *dict)
{
	int i;
	int num_lines;
	int colon_counter;

	i = 0;
	colon_counter = 0;
	num_lines = ft_line_counter(dict);
	if (ft_is_digit(dict[0]) == 0)
		return (1);
	while (dict[i] != '\0')
	{
		if (ft_is_printable(dict[i + 1]) == 0)
			return (1);
		while (dict[i] == ':')
			colon_counter++;
		i++;
	}
	if (colon_counter != num_lines)
		return (1);
	if (num_lines < MIN_LINES)
		return (1);
	return (0);
}
