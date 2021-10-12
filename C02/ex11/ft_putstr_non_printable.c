/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:41:54 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 22:17:50 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		dec;
	int		temp1;
	int		temp2;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			dec = str[i];
			temp1 = dec / 16;
			temp2 = dec % 16;
			ft_putchar('\\');
			ft_putchar(hexa[temp1]);
			ft_putchar(hexa[temp2]);
		}
		i++;
	}
}
