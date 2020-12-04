/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:41:43 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/03 19:41:41 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;
	int i;

	result = 1;
	i = 1;
	if (nb == 0)
		return (0);
	while (result < nb)
	{
		result = i * i;
		if (result == nb)
			return (i);
		else if (result > nb)
			return (0);
		else
			i++;
	}
	return (result);
}
