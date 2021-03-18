/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:41:17 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/25 11:45:32 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int m;
	int value;

	i = 0;
	m = 0;
	value = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			m++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	if (m % 2 == 1)
		value = value * -1;
	return (value);
}
