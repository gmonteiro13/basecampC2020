/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 00:57:47 by gsoares-          #+#    #+#             */
/*   Updated: 2020/11/22 22:09:48 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int lar;
	int alt;

	lar = 1;
	alt = 1;
	while (y >= alt)
	{
		while (x >= lar)
		{
			if (alt == 1 && (lar == 1 || lar == x))
				ft_putchar('A');
			else if (y == alt && (lar == 1 || lar == x))
				ft_putchar('C');
			else if ((alt == 1 || alt == y) || (lar == 1 || lar == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (lar == x)
				ft_putchar('\n');
			lar += 1;
		}
		lar = 1;
		alt += 1;
	}
}
