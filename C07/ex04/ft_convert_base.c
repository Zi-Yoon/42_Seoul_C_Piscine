/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 04:03:50 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 03:09:17 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long long	ft_make_digit(char *str, char *base, int len, int cnt);
int			ft_len(int digit, int size);

int	ft_check_base(char *base)
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

long long	ft_atoi_base_edit(char *str, char *base)
{
	int	len;
	int	cnt;
	int	minus;

	cnt = 0;
	minus = 1;
	len = ft_check_base(base);
	while (((*str >= 9 && *str <= 13) || (*str >= 32 && *str <= 47)
			|| (*str >= 58 && *str <= 126)) && *str != '+' && *str != '-')
		cnt++;
	while ((str[cnt] == '+' || str[cnt] == '-') && str[cnt])
	{
		if (str[cnt] == '-')
			minus *= -1;
		cnt++;
	}
	return (ft_make_digit(str, base, len, cnt) * minus);
}

int	ft_digit_to_base(long long digit, int size, char *base_to, char *ans)
{
	long long	temp;
	int			i;
	int			len;

	temp = digit;
	len = 0;
	len += ft_len(digit, 10);
	if (temp < 0)
	{
		temp *= -1;
		ans[0] = '-';
		len++;
	}
	ans[len] = '\0';
	i = len;
	while (temp > 0)
	{
		ans[--len] = base_to[temp % size];
		temp /= size;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				len;
	int				now;
	int				after;
	int				digit;
	char			*ans;

	now = ft_check_base(base_from);
	after = ft_check_base(base_to);
	if (now == 0 || after == 0)
		return (0);
	digit = ft_atoi_base_edit(nbr, base_from);
	len = ft_len(digit, 10);
	if (digit < 0)
		len++;
	ans = (char *)malloc(sizeof(char) * len + 1);
	ft_digit_to_base(digit, after, base_to, ans);
	return (ans);
}
