/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:06:18 by byan              #+#    #+#             */
/*   Updated: 2021/10/18 14:13:33 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	a;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		a = str[i - 1];
		if (!((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] = str[i] - 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				str[i] = str[i] + 32;
		if ((a >= 'A' && a <= 'Z') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if ((a >= 'a' && a <= 'z') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
