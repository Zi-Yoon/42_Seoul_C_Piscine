/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 04:04:08 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 15:36:11 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	ft_str_find(char *str, char *charset)
{
	
}

void	ft_new_arr(char **array, char *charset)
{
	*array = (char *)malloc(sizeof(char) * );
}

char	**ft_split(char *str, char *charset)
{
	int		index;
	int		size;
	char	**array;
	
	index = 0;
	if (!(array = (char **)malloc(sizeof(char *) * )))
		return (0);
	


	array[index] = 0;
}