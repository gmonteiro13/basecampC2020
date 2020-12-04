#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char s1[40]="Curso";
	char s2[]=" de Ruby on Rails";
	char s3[40]="Curso";
	char s4[]=" de Ruby on Rails";

	strncat(s1, s2, 17);
	printf("Retorno: %s\n", s1);
	ft_strncat(s3, s4, 17);
	printf("Retorno: %s\n", s3);
}