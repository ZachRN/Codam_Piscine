#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "this is a big test";
	int i = ft_strlen(str);
	printf("%d\n",i);
}