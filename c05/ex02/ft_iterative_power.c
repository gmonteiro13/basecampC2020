/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:54:01 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/03 19:04:36 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power <= 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	result = nb;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
