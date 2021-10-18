/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:09 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 02:56:00 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	long long		num;
	int				len;

	num = nb;
	if (num == 0)
	{
		ft_putstr("0");
		return ;
	}
	ft_itoa_print(num);
}
