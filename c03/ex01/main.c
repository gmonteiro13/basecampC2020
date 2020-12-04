#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

// int		main(void)
// {
// 	char s1[]="\0";
// 	char s2[]="";
// 	int retorno;

// 	retorno = ft_strncmp(s1, s2, 12);
// 	printf("Retorno: %d\n", retorno);
// 	retorno = strncmp(s1, s2, 12);
// 	printf("Retorno: %d\n", retorno);
// }

#include <stdio.h>
#include <string.h>

int    main(void)
{
  printf("%d", ft_strncmp("ABC", "ABC", 3));
  printf("\n");
  printf("%d", strncmp("ABC", "ABC", 3));
  printf("\n--------\n");
  printf("%d", ft_strncmp("ABC", "ABCD", 3));
  printf("\n");
  printf("%d", strncmp("ABC", "ABCD", 3));
  printf("\n--------\n");

  printf("%d", ft_strncmp("hello", "helLO WORLD", 3));
  printf("\n");
  printf("%d", strncmp("hello", "helLO WORLD", 3));
  printf("\n--------\n");
  printf("%d", ft_strncmp("hello", "helLO WORLD", 4));
  printf("\n");
  printf("%d", strncmp("hello", "helLO WORLD", 4));
  printf("\n--------\n");

  printf("%d", ft_strncmp("ABC", "ABCD", 4));
  printf("\n");
  printf("%d", strncmp("ABC", "ABCD", 4));
  printf("\n--------\n");
  printf("%d", ft_strncmp("ABc", "ABC", 3));
  printf("\n");
  printf("%d", strncmp("ABc", "ABC", 3));
  printf("\n--------\n");
  printf("%d", ft_strncmp("abcdef", "ABCDEF", 4));
  printf("\n");
  printf("%d", strncmp("abcdef", "ABCDEF", 4));
  printf("\n--------\n");

  printf("%d", ft_strncmp("ABCDEF", "abcdef", 4));
  printf("\n");
  printf("%d", strncmp("ABCDEF", "abcdef", 4));
  printf("\n--------\n");

  printf("%d", ft_strncmp("Aticleworld", "Atic", 3));
  printf("\n");
  printf("%d", strncmp("Aticleworld", "Atic", 3));
  printf("\n--------\n");
  printf("%d", ft_strncmp("Hello", "Aticleworld", 5));
  printf("\n");
  printf("%d", strncmp("Hello", "Aticleworld", 5));
  printf("\n--------\n");
}