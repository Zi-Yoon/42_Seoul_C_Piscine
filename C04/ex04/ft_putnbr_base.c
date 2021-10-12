/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:27:10 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 23:36:02 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_find_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

unsigned int	ft_change_nbr(int nbr, unsigned int n, char *base, char *temp)
{
	unsigned int	i;
	int				temp_num;

	i = 0;
	temp_num = nbr;
	if (temp_num < 0)
	{
		temp_num *= -1;
	}
	while (temp_num != 0)
	{
		temp[i] = base[temp_num % n];
		temp_num /= n;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n_base;
	unsigned int	n_nbr;
	char			temp_str[100];
	int				minus;

	minus = 1;
	n_base = ft_find_base(base);
	if (n_base == 0)
		return ;
	if (nbr == 0)
		ft_putchar(base[0]);
	if (nbr < 0)
		minus = -1;
	else
	{
		n_nbr = ft_change_nbr(nbr, n_base, base, temp_str);
		if (minus == -1)
			ft_putchar('-');
		while (n_nbr-- > 0)
		{
			ft_putchar(temp_str[n_nbr]);
		}
	}
}
