/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:10 by byan              #+#    #+#             */
/*   Updated: 2021/10/11 13:40:43 by byan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_num(int num1, int num2)
{
	int	temp1;
	int	temp2;

	temp1 = num1 / 10;
	temp2 = num2 / 10;
	ft_putchar('0' + temp1);
	ft_putchar('0' + num1 % 10);
	ft_putchar(' ');
	ft_putchar('0' + temp2);
	ft_putchar('0' + num2 % 10);
	if (num1 == 98)
	{
		return ;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	temp1;
	int	temp2;

	num1 = 0;
	num2 = 1;
	while (num1 < 98)
	{
		if (num2 == 100)
		{
			num1++;
			num2 = num1 + 1;
		}
		ft_put_num (num1, num2);
		num2++;
	}
}
