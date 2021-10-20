/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:18:56 by byan              #+#    #+#             */
/*   Updated: 2021/10/20 16:49:06 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_exp(int a, int n)
{
	int	ans;

	ans = 1;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		ans *= a;
		n--;
	}
	return (ans);
}

int	ft_plus_digit(int *temp, int n, int len)
{
	int	digit;
	int	i;

	i = 0;
	digit = 0;
	while (n-- > 0)
	{
		digit += temp[i] * ft_exp(len, n);
		i++;
	}
	return (digit);
}

int	ft_make_digit(char *str, char *base, int len, int cnt)
{
	int	i;
	int	n;
	int	temp[30];

	n = 0;
	i = 30;
	while (i--)
		temp[i] = 0;
	while (1)
	{
		i = 0;
		while (str[cnt] != base[i] && i < len)
			i++;
		if (i >= len)
			break ;
		else
		{
			temp[n] = i;
			cnt++;
			n++;
		}
	}
	return (ft_plus_digit(temp, n, len));
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	cnt;
	int	minus;

	cnt = 0;
	minus = 1;
	len = ft_check_base(base);
	if (len == 0)
		return (0);
	while (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		cnt++;
	while ((str[cnt] == '+' || str[cnt] == '-') && str[cnt])
	{
		if (str[cnt] == '-')
			minus *= -1;
		cnt++;
	}
	return (ft_make_digit(str, base, len, cnt) * minus);
}
