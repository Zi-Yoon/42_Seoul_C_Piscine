/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 03:18:07 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 04:46:03 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

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

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	int		len;

	len = ft_strlen(src);
	if (len <= 0)
		return (0);
	else
	{
		dest = (char *)malloc(sizeof(src) + 1);
		ft_strcpy(dest, src);
		return (dest);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t_arr;
	int			cnt;

	cnt = 0;
	t_arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (t_arr != '\0')
		return (0);
	while (cnt < ac)
	{
		t_arr[cnt].str = av[cnt];
		t_arr[cnt].size = ft_strlen(av[cnt]);
		t_arr[cnt].copy = ft_strdup(av[cnt]);
		cnt++;
	}
	t_arr[cnt].str = 0;
	return (t_arr);
}
