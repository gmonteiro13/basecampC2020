/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:26:41 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/03 16:39:01 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int fibonacio;

	fibonacio = index;
	if (index <= 0)
	{
		if (index == 0)
			return (0);
		else
			return (-1);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index > 1)
	{
		fibonacio = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (fibonacio);
}
