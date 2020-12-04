#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char str[30] = "-1325632167";
	char str2[30] = "-1325632167";
	int retorno;
	int retorno2;

	retorno = atoi(str);
	printf("%d\n", retorno);
	retorno2 = ft_atoi(str2);
	printf("%d\n", retorno2);

}
