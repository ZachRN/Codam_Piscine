/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 07:57:48 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/19 08:18:55 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] == '\0')
		return (str);
	if (str[0] >= 'a' && str[i] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (str[i] >= 'A' && str[i - 1] <= 'Z')
			{
				str[i] += 32;
			}
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
