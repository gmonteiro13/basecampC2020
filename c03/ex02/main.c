#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char s1[]="Curso";
	char s2[]="/";
	char s3[]="Curso";
	char s4[]="/";

	strcat(s1, s2);
	printf("Retorno: %s\n", s1);
	ft_strcat(s3, s4);
	printf("Retorno: %s\n", s3);
}