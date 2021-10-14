/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 04:03:35 by byan              #+#    #+#             */
/*   Updated: 2021/10/15 00:16:18 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	return (p_dest);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		max_len;
	char	*ans;

	i = size;
	max_len = 0;
	while (i--)
		max_len += ft_strlen(strs[i]);
	ans = (char *)malloc(max_len +  + sizeof(*sep) * size);
	i = 0;
	while (i < size)
	{
		ft_strcat(ans, strs[i]);
		if (i == size - 1)
			break ;
		ft_strcat(ans, sep);
		i++;
	}
	return (ans);
}
