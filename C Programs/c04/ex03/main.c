#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	char str[] = " ---+-++++++++-+123234ab567";
	printf("%d\n", ft_atoi(str));
}