/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:09 by byan              #+#    #+#             */
/*   Updated: 2021/10/11 13:41:15 by byan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_reset_start(char *num, int temp)
{
	int	n;

	n = 0;
	if (temp < 0)
	{
		if (temp == -2147483628)
		{
			temp++;
			num[0]++;
		}
		temp = temp * -1;
	}
	while (temp > 0)
	{
		num[n] += temp % 10;
		temp = temp / 10;
		n++;
	}
	if (n == 0)
	{
		n++;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	char	num[20];
	int		temp;
	int		i;
	int		minus;

	i = -1;
	while (i++ < 20)
	{
		num[i] = '0';
	}
	if (nb < 0)
	{
		minus = 1;
	}
	i = ft_reset_start(num, nb) - 1;
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
