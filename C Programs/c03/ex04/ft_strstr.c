/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 09:32:24 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/27 11:33:19 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	if (to_find[0] == '\0')
		return (&str[x]);
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			y++;
			if (to_find[y] == '\0')
				return (&str[x]);
		}
		x++;
	}
	return (0);
}
