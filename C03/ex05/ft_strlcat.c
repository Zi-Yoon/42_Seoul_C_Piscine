/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:17:01 by byan              #+#    #+#             */
/*   Updated: 2021/10/18 23:16:10 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	index;

	index = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	while ((src[index] != '\0') && (dest_len + index + 1 < size))
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest_len + src_len);
}
