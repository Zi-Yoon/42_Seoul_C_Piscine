/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 03:58:21 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 04:45:45 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_len_num(long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

void	ft_itoa_print(long long num)
{
	int		len;
	int		minus;
	char	temp[20];

	minus = 1;
	if (num < 0)
	{
		minus = -1;
		num *= -1;
		temp[0] = '-';
	}
	len = ft_len_num(num);
	temp[len + 1] = '\0';
	while (len > 0)
	{
		temp[len] = '0' + num % 10;
		num /= 10;
		len--;
	}
	if (minus == -1)
		ft_putstr(&temp[0]);
	else
		ft_putstr(&temp[1]);
}

void	ft_putnbr(int nb)
{
	long long	num;
	int			len;

	num = nb;
	if (num == 0)
	{
		ft_putstr("0");
		return ;
	}
	ft_itoa_print(num);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}
