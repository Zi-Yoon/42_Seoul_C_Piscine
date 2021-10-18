/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:41:54 by byan              #+#    #+#             */
/*   Updated: 2021/10/18 14:24:00 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		dec;
	char	*hexa;

	hexa = "0123456789abcdef";
	while (*str)
	{
		if (*str >= 32 && *str != 127)
		{
			ft_putchar(*str);
		}
		else
		{
			dec = *str;
			ft_putchar('\\');
			ft_putchar(hexa[dec / 16]);
			ft_putchar(hexa[dec % 16]);
		}
		str++;
	}
}
