/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:05:37 by gsoares-          #+#    #+#             */
/*   Updated: 2020/11/25 13:35:42 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_spaces(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
		write(1, "", 1);
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = a + 2;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				ft_print_spaces(a, b, c);
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
}

int	main(void)
{
	ft_print_comb();
}