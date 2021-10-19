/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 04:03:50 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 16:50:07 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(long long digit, int size)
{
	int	len;

	len = 0;
	while (digit != 0)
	{
		digit /= size;
		len++;
	}
	return (len);
}

long long	ft_exp(int a, int n)
{
	long long	ans;

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

long long	ft_plus_digit(int *temp, int n, int len)
{
	long long	digit;
	int			i;

	i = 0;
	digit = 0;
	while (n-- > 0)
	{
		digit += temp[i] * ft_exp(len, n);
		i++;
	}
	return (digit);
}

long long	ft_make_digit(char *str, char *base, int len, int cnt)
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
