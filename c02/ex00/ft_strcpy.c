/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 23:28:28 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/01 19:52:21 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0'; // dest[6] = '\0'
	return (dest);
}

int		main(void)
{
	char src1[6]= "teste";
	char dest1[6] = "";
	
	printf("O que eu quero copiar: %s\n", src1);
	printf("Pra onde eu quero copiar: %s\n", dest1);
	ft_strcpy(dest1, src1);
	printf("Resultado: %s\n", dest1);
}