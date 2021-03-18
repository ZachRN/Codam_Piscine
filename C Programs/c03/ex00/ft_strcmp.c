/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 07:49:18 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/20 15:03:39 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int				value;
	unsigned int	i;

	i = 0;
	value = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (s1[i] != s2[i])
		value = s1[i] - s2[i];
	return (value);
}
