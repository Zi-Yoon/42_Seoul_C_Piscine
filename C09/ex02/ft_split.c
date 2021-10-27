/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 04:04:08 by byan              #+#    #+#             */
/*   Updated: 2021/10/27 19:23:43 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str, int mode)
{
	int	len;

	len = 0;
	while (mode == 1)
	{
		if (*str == '\0')
			return (len);
		str++;
		len++;
	}
	while (mode == 2)
	{
		if (*str == '/' || *str == '\0')
			return (len);
		str++;
		len++;
	}
	return (0);
}

void	ft_strcpy(char *dest, char *src, int mode)
{
	unsigned int	i;

	i = 0;
	while (mode == 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (mode == 2 && src[i] != '\0' && src[i] != '/')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_len(char *temp)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (temp[++i])
	{
		while (temp[i] != '/' && temp[i] != '\0')
		{
			i++;
			if (temp[i] == '/' || temp[i] == '\0')
				len++;
		}
	}
	return (len);
}

int	ft_seperate_str(char *temp, char *charset, int char_len)
{
	int	i;
	int	j;

	i = -1;
	while (temp[++i])
	{
		j = -1;
		while (++j < char_len)
		{
			if (temp[i] == charset[j])
				temp[i] = '/';
		}
	}
	return (ft_len(temp));
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		char_len;
	int		str_len;
	char	**arr;
	char	*temp;

	temp = (char *)malloc(sizeof(char) * ft_strlen(str, 1) + 1);
	ft_strcpy(temp, str, 1);
	str_len = ft_seperate_str(temp, charset, ft_strlen(charset, 1));
	i = -1;
	arr = (char **)malloc(sizeof(char *) * (str_len + 1));
	while (i++ < str_len)
	{
		while (*temp == '/' && *temp != '\0')
			temp++;
		if (*temp != '/' && *temp != '\0')
		{
			char_len = ft_strlen(temp, 2);
			arr[i] = (char *)malloc(sizeof(char) * char_len + 1);
			ft_strcpy(arr[i], temp, 2);
			temp += char_len;
		}
	}
	return (arr);
}
