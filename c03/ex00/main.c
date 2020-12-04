#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[]="";
	char s2[]="";
	int retorno;

	retorno = ft_strcmp(s1, s2);
	printf("Retorno: %d\n", retorno);
	retorno = strcmp(s1, s2);
	printf("Retorno: %d\n", retorno);
}