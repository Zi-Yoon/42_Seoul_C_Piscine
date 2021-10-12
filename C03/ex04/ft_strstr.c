/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:41 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 16:41:45 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (1)
	{
		if (*str == '\0')
			return(len);
		str++;
		len++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	index_str;
	int	index_find;

	index_str = 0;
	index_find = 0;
	if (ft_strlen(str) < ft_strlen(to_find))
		return (0);
	else if (ft_strlen(to_find) == 0)
		return (str);
	else
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
					return (&str[index_str]);
				else
					index_find = 0;
			}
		}
		return (0);
	}
}