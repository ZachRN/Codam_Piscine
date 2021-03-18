/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 07:49:18 by znajda        #+#    #+#                 */
/*   Updated: 2020/09/01 09:49:28 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				value;

	i = 0;
	value = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
			break ;
		}
		if (s1[i] == '\0' && s2[i] == '\0')
			break ;
		i++;
	}
	return (value);
}
