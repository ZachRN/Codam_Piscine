/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 09:32:59 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/01 13:00:23 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	x = 0;
	y = 0;
	z = 0;
	while (dest[x] != '\0')
		x++;
	while (src[z] != '\0')
		z++;
	while (src[y] != '\0' && y < size)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	if (src[y] == '\0' && y < size)
		y--;
	dest[x] = '\0';
	return (z + y);
}
