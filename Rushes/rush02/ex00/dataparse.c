#include <unistd.h>
#include <stdlib.h>

#define INIT_BUFFER 3200

char	*ft_create_dict(char *file_name, int file_size);
int		ft_file_size(char *file_name, int cnt);
int		ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	arraywordsearch(char *array, int x)
{
	int spacecheck;

	spacecheck = 0;
	while (array[x] != ':')
		x++;
	x++;
	while (array[x] != '\n' && array[x] != '\0')
	{
		if (spacecheck == 0)
		{
			if (array[x] != 32)
				spacecheck = 1;
		}
		if (spacecheck == 1)
		{
			ft_putchar(array[x]);
			if (array[x] == 32)
				spacecheck = 0;
		}
		x++;
	}
	write(1, " ", 1);
}

void	arrayparse(char *array, char *nbr)
{
	int i;
	int x;
	int break2;

	i = 0;
	x = 0;
	break2 = 0;
	while (array[x] != '\0')
	{
		while (array[x + i] == nbr[i])
		{
			i++;
			if(nbr[0] == '0')
			{
				if(x == 0)
					{
						x = x + i;
						break2 = 1;
						break;
					}
				else if (array[x + i] == 32 && nbr[i] == '\0' && array[x - i] == '\n')
				{
					break2 = 1;
					x = x + i;
					break ;
				}
				else if (array[x + i] == ':' && nbr[i] == '\0' && array[x - i] == '\n')
				{
					break2 = 1;
					x = x + i;
					break ;
				}
			}
			else
			{
				if(array[x + i] == 32 && nbr[i] == '\0')
				{
					break2 = 1;
					x = x + i;
					break ;
				}
				else if (array[x + i] == ':' && nbr[i] == '\0')
				{
					x = x + i;
					break2 = 1;
					break ;
				}
			}
		}
		if (break2 == 1)
			break ;
		i = 0;
		x++;
	}
	arraywordsearch(array, x);
}



void	dataparse(char *array, int place, char *temp2)
{
	char *tempten;
	int i;
	int x;
	i = 0;
	tempten = (char *)malloc((3 * place + 2) * sizeof(char));
	tempten[0] = '1'; 
	x = 1;
	while (i < place)
	{
		tempten[x] = '0';
		x++;
		tempten[x] = '0';
		x++;
		tempten[x] = '0';
		x++;
		i++;
	}
	tempten[x] = '\0';
	if (temp2[0] != '0' || temp2[1] != '0' || temp2[2] != '0')
		if (place != 0)
			arrayparse(array, tempten);
	free(tempten);
}
void	ft_HTO(char x, char y, char z, char *array)
{
	char send[3];
	if (x != '0')
	{
		send[0] = x;
		send[1] = '\0';
		arrayparse(array, send);
		arrayparse(array, "100");	
	}

	if (y == '1')
	{
		send[0] = '1';
		send[1] = z;
		send[2] = '\0';
		arrayparse(array, send);
	}
	else if ( y != '0')
	{
		send[0] = y;
		send[1] = '0';
		send[2] = '\0';
		arrayparse(array, send);
		if (z != '0')
		{
			send[0] = z;
			send[1] = '\0';
			arrayparse(array, send);
		}
			
	}
	else
		if (z != '0')
			{
				send[0] = z;
				send[1] = '\0';
				arrayparse(array, send);
			}
}

char	*nbrcheck(char *nbr)
{
	int i;
	int x;
	int tf;

	i = 0;
	x = 0;
	while(nbr[i] != '\0')
	{
		if (nbr[i] != '0' && tf == 0)
			tf = 1;
		if (tf == 1)
		{
			nbr[x] = nbr[i];
			x++;
		}
		i++;
	}
	nbr[x] = '\0';
	if (tf == 0)
	{
		nbr[0] = '0';
		nbr[1] = '\0';
	}
	return (nbr);
}

int		ft_parse(char *str, char *nbr, int len)
{
	int i;
	int x;
	int file_size;
	char *array;
	char temp2[4];
	nbr = nbrcheck(nbr);

	temp2[3] = '\0';
	if	(len < 0)
	{
		write(1, "Error\n", 7);
		return (-1);
	}
	else if (len > 39)
	{
		write(1, "Dict Error\n", 14);
		return (-1);
	}
	file_size = ft_file_size(str, INIT_BUFFER);
	array = ft_create_dict(str, file_size);
	i = ((len - 1) / 3);
	x = ((len - 1) % 3);
	if (nbr[0] == '0')
	{
		temp2[0] = '0';
		temp2[1] = '\0';
		arrayparse(array, temp2);
		return(0);
	}
	if (x == 2)
	{
		ft_HTO(nbr[0], nbr[1], nbr[2], array);
		x = 3;
		temp2[0] = nbr[0];
		dataparse(array,i,temp2);
		i--;
	}
	if (x == 1)
	{
		ft_HTO('0', nbr[0], nbr[1], array);
		x = 2;
		temp2[0] = nbr[0];
		dataparse(array,i,temp2);
		i--;
	}
	else if (x == 0)
	{
		ft_HTO('0', '0', nbr[0], array);
		x = 1;
		temp2[0] = nbr[0];
		dataparse(array,i,temp2);
		i--;
	}
	while (i >= 0)
	{
		ft_HTO(nbr[x], nbr[x + 1], nbr[x + 2], array);
		temp2[0] = nbr[x];
		temp2[1] = nbr[x + 1];
		temp2[2] = nbr[x + 2];
		dataparse(array,i,temp2);
		x+=3;
		i--;
	}
	write(894189165, "",50);
	return (0);
}
