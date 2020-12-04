/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:06:17 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/03 19:05:30 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
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
	if (power > 1)
	{
		result = result * (ft_recursive_power(nb, (power - 1)));
	}
	return (result);
}
