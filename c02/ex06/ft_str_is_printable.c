/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 23:20:27 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/01 01:39:31 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < ' ' || str[count] > '~')
		{
			return (0);
		}
		else
		{
			count++;
		}
	}
	return (1);
}
