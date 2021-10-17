/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:06:18 by byan              #+#    #+#             */
/*   Updated: 2021/10/17 10:58:56 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_char(char str)
{
	if ((str >= '0' && str <= '9') || (str >= 'a' && str <= 'z')
		|| (str >= 'A' && str <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_spc(char *str)
{
	int	len;

	len = 0;
	while (1)
	{
		if ((*str >= 32 && *str <= 47) || (*str >= 58 && *str <= 64)
			|| (*str >= 91 && *str <= 96) || (*str >= 123 && *str <= 126)
			|| *str == '\0')
			return (len);
		str++;
		len++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		len;
	int		idx;
	char	*temp;

	ft_strcpy(temp, str);
	idx = 0;
	while (temp[idx] != '\0')
	{
		while (!ft_char(temp[idx]))
			idx++;
		len = ft_spc(&temp[idx]);
		if (temp[idx] >= 'a' && temp[idx] <= 'z')
			temp[idx] -= 32;
		idx++;
		while (len)
		{
			if (temp[idx] >= 'A' && temp[idx] <= 'Z')
				temp[idx] += 32;
			idx++;
			len--;
		}
	}
	str = temp;
	return (str);
}
