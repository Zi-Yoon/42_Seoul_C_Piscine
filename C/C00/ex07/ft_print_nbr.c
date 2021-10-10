/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:09 by byan              #+#    #+#             */
/*   Updated: 2021/10/10 17:56:36 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_reset_start(int *num, int n, int i, int temp)
{
	int		per_temp;

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
}

void	ft_putnbr(int nb)
{
	char	num[20];
	int		temp;
	int		n;
	int		i;

	temp = nb;
	n = 0;
	i = 0;
	ft_reset_start(*num, n, i, temp);
	i = n;
	while (i > 0)
	{
		ft_putchar(num[i]);
		i--;
	}
}
