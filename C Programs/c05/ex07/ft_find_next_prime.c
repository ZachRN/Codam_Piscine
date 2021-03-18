/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 16:53:39 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/26 15:04:10 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (i == 0)
	{
		i = ft_is_prime(nb);
		if (i == 0)
			nb++;
	}
	return (nb);
}
