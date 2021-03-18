/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 14:53:39 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/21 15:05:16 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int multi;

	i = 1;
	multi = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * multi;
		i++;
	}
	return (nb);
}
