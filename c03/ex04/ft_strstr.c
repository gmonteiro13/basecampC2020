/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:20:33 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/02 01:52:40 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (ft_strlen(str) - ft_strlen(to_find) + 1))
	{
		while (j < ft_strlen(to_find))
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (j == ft_strlen(to_find))
			return (&str[i]);
		i++;
	}
	return (str);
}
