/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 08:42:15 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/25 08:58:36 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
