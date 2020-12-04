/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 00:36:15 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/01 20:06:57 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

int		main(void)
{
	char src1[6]= "teste";
	char dest1[6] = "";
	unsigned int n;

	n = 4;
	printf("O que eu quero copiar: %s\n", src1);
	printf("Pra onde eu quero copiar: %s\n", dest1);
	ft_strncpy(dest1, src1, n);
	printf("Resultado: %s\n", dest1);
}