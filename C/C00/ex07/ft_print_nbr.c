/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:09 by byan              #+#    #+#             */
/*   Updated: 2021/10/10 23:04:42 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_reset_start(char *num, int temp, int max)
{
	int	per_temp;
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < 20)
	{
		num[i] = '0';
		i++;
	}
	while (temp > 0)
	{
		per_temp = temp % 10;
		num[n] += per_temp;
		temp = temp / 10;
		n++;
	}
	if (max == 1)
	{
		num[0]++;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	char	num[20];
	int		temp;
	int		n;
	int		i;
	int 	minus;
	int 	max;

	if (nb < 0)
	{
		minus = 1;
		if (nb == -2147483628)
		{
			nb = (nb + 1) * -1;
			max = 1;
		}
	}
	n = ft_reset_start(num, nb, max);
	i = n - 1;
	while (i >= 0)
	{
		if (minus == 1)
		{
			ft_putchar('-');
			minus--;
		}
		ft_putchar(num[i]);
		i--;
	}
}
