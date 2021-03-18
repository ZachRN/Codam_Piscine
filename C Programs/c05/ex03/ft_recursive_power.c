/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 15:06:12 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/21 15:22:21 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int i;
	int multi;

	i = 1;
	multi = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (i < power)
	{
		return (multi * ft_recursive_power(nb, (power - 1)));
	}
	return (nb);
}
