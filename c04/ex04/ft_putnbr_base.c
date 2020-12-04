/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:21:49 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/02 21:00:08 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	
}
void	ft_putnbr_base(int nbr, char *base)
{
	int num_base;
	int mod;
	int div;
	
	num_base = check_base(base);
	while (div != 0)
	{
		mod = nbr % num_base;
		div = nbr / num_base;
	}
}