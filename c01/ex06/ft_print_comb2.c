/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 06:09:00 by gsoares-          #+#    #+#             */
/*   Updated: 2020/11/25 04:14:14 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_spaces(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
		write(1, '\0', 1);
	else
		write(1, ", ", 2);
}

void	ft_last_digits(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_print_spaces(a, b, c, d);
			d += 1;
		}
		c += 1;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_last_digits(a, b, c, d);
			b += 1;
			c = a;
			d = b + 1;
		}
		a += 1;
		b = '0';
		c = a;
		d = b + 1;
	}
}

int		main(void)
{
	ft_print_comb2();
}