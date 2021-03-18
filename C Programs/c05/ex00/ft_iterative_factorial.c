/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 14:25:29 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/21 14:29:57 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int holder;

	holder = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb != 1)
		{
			nb--;
			holder = holder * nb;
		}
	}
	return (holder);
}
