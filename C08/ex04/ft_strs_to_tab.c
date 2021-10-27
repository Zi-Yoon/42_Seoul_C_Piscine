/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 03:18:07 by byan              #+#    #+#             */
/*   Updated: 2021/10/27 15:11:21 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*t_arr;
	int					cnt;

	cnt = 0;
	t_arr = (struct s_stock_str *)malloc(sizeof(*t_arr) * (ac + 1));
	if (!(t_arr))
		return (0);
	while (cnt < ac)
	{
		t_arr[cnt].str = av[cnt];
		t_arr[cnt].size = ft_strlen(av[cnt]);
		t_arr[cnt].copy = ft_strdup(av[cnt]);
		cnt++;
	}
	t_arr[cnt].str = NULL;
	return (t_arr);
}
