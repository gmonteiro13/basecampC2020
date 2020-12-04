/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 02:11:01 by gsoares-          #+#    #+#             */
/*   Updated: 2020/12/03 19:30:18 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_first_char(char *str, int i)
{
	if (i == 0 && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
}

void	check_printable(char *str, int i)
{
	if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
	{
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
		{
			str[i] = str[i];
		}
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
		{
			str[i] = str[i];
		}
		else
		{
			str[i] = str[i] - 32;
		}
	}
	else
	{
		str[i] = str[i];
	}
}

void	check_uppercase(char *str, int i)
{
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
	{
		str[i] = str[i] + 32;
	}
	else if (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
		str[i] = str[i] + 32;
	}
	else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
	{
		str[i] = str[i] + 32;
	}
	else
	{
		str[i] = str[i];
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i++] != '\0')
	{
		if ((i - 1) == 0)
			check_first_char(str, (i - 1));
		else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			check_printable(str, (i - 1));
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			check_uppercase(str, (i - 1));
		else
			str[i - 1] = str[i - 1];
	}
	return (str);
}
