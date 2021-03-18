/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 15:26:55 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/25 08:31:57 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
