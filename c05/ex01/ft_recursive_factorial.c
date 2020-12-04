/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:47:33 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/03 18:54:48 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb <= 0)
	{
		if (nb == 0)
			return (1);
		else
			return (0);
	}
	result = 1;
	if (nb > 1)
	{
		result = (nb * ft_recursive_factorial(nb - 1));
	}
	return (result);
}
