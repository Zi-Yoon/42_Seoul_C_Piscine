/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:41 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 22:16:53 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (1)
	{
		if (*str == '\0')
			return (len);
		str++;
		len++;
	}
}

char	*ft_findstr(char *str, char *to_find, int index_str, int index_find)
{
	while ((str[index_str] != '\0') && (to_find[index_find] != '\0'))
	{
		if (str[index_str] != to_find[index_find])
			index_str++;
		else
		{
			while (str[index_str] == to_find[index_find])
			{
				index_str++;
				index_find++;
			}
			if (to_find[index_find] == '\0')
				return (&str[index_str - ft_strlen(to_find)]);
			else
				index_find = 0;
		}
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	index_str;
	int	index_find;
	int	to_find_len;

	index_str = 0;
	index_find = 0;
	to_find_len = ft_strlen(to_find);
	if (ft_strlen(str) < to_find_len)
		return (0);
	else if (to_find_len == 0)
		return (str);
	else
	{
		return (ft_findstr(str, to_find, index_str, index_find));
	}
}
