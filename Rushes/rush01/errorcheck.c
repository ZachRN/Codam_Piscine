/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   errorcheck.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 11:40:37 by znajda        #+#    #+#                 */
/*   Updated: 2020/08/23 16:25:50 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		iferror(int i, char *src)
{
	if (src[i] > '4' || src[i] < '1')
		return (-1);
	if ((i >= 0 && i <= 4) || (i >= 8 && i <= 11))
		if (src[i] == '1' && src[i + 4] == '1')
			return (-1);
	if ((i >= 0 && i <= 4) || (i >= 8 && i <= 11))
		if (src[i] + src[i + 4] >= 'f')
			return (-1);
	if (i == 16)
		return (-1);
	return (1);
}

int		cornercheck(int i, char *src)
{
	if (i == 0)
		if ((src[0] == '1' && src[8] == '4') ||
		(src[0] == '4' && src[8] == '1'))
			return (-1);
	if (i == 3)
		if ((src[3] == '1' && src[12] == '4') ||
		(src[3] == '4' && src[12] == '1'))
			return (-1);
	if (i == 4)
		if ((src[4] == '1' && src[11] == '4') ||
		(src[4] == '4' && src[11] == '1'))
			return (-1);
	if (i == 7)
		if ((src[7] == '1' && src[15] == '4') ||
		(src[7] == '4' && src[15] == '1'))
			return (-1);
	return (1);
}

int		errorcheck(char *src, int size)
{
	int i;
	int returnvalue;

	i = 0;
	returnvalue = 1;
	if (size > 2)
		return (-1);
	while (src[i] != '\0')
	{
		returnvalue = iferror(i, src);
		if (returnvalue == -1)
			return (returnvalue);
		returnvalue = cornercheck(i, src);
		if (returnvalue == -1)
			return (returnvalue);
		i++;
	}
	if (i != 16)
		return (-1);
	if (src[16] != '\0')
		return (-1);
	return (returnvalue);
}
