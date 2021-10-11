/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <sss@student.42seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:06:18 by byan              #+#    #+#             */
/*   Updated: 2021/10/11 20:26:38 by byan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (1)
	{
		if (*str == '\0')
		{
			return (len);
		}
		str++;
		len++;
	}
}

int	ft_spc(char *str)
{
	int	len;

	len = 0;
	while (1)
	{
		if (*str == ' ' || *str == '\0')
		{
			return (len);
		}
		str++;
		len++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;
	int	len;
	int	max;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		len = ft_spc(&str[0] + i);
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
		j = 1;
		while (len--)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
	}
	return (str);
}
