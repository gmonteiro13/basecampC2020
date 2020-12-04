#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char haystack[] = "Aqui pode ter um 42, cuidado onde pisa!";
	char needle[] = "ter";
	char *retorno;
	char *retorno2;

	retorno = strstr(haystack, needle);
	retorno2 = ft_strstr(haystack, needle);
	printf("%s\n", retorno);
	printf("%s\n", retorno2);

}