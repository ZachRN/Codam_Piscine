/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 14:32:12 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/21 14:51:00 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
