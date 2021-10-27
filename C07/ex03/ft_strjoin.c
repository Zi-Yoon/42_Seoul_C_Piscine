/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 04:03:35 by byan              #+#    #+#             */
/*   Updated: 2021/10/27 18:02:02 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **str, int size)
{
	int	len;
	int	i;
	int	j;

	i = -1;
	len = 0;
	while (++i < size)
	{
		j = -1;
		while (str[i][++j] != '\0')
			len++;
	}
	return (len);
}

int	ft_sep_len(char *sep)
{
	int	len;
	int	i;

	i = -1;
	len = 0;
	while (sep[++i])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	int		len;
	int		i;

	if (size)
	{
		len = ft_strlen(strs, size) + (ft_sep_len(sep) * (size - 1));
		ans = (char *)malloc(sizeof(char) * (len + 1));
		if (!(ans))
			return (0);
	}
	else
		return ((char *)malloc(sizeof(char)));
	i = -1;
	while (++i < size)
	{
		ans = ft_strcat(ans, strs[i]);
		if (i + 1 != size)
			ft_strcat(ans, sep);
	}
	ans = ft_strcat(ans, "\0");
	return (ans);
}
