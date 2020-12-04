/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:34:31 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/02 23:32:30 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int abs_number;

	if (nb < 0)
	{
		ft_putchar('-');
		abs_number = (unsigned int)(-nb);
	}
	else
		abs_number = (unsigned int)nb;
	if (abs_number > 9)
	{
		ft_putnbr(abs_number / 10);
		ft_putchar(48 + abs_number % 10);
	}
	else
		ft_putchar(abs_number + 48);
}
