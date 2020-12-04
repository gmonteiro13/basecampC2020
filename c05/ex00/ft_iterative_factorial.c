/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:09:44 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/03 18:46:50 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = nb;
	result = nb;
	if (nb <= 0)
	{
		if (nb == 0)
			return (1);
		else
			return (0);
	}
	while (i > 1)
	{
		result *= (i - 1);
		i--;
	}
	return (result);
}
