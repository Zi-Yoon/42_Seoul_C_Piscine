/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:02:33 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 02:49:33 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int			minus;
	long long	answer;

	minus = 1;
	answer = 0;
	while (((*str >= 9 && *str <= 13) || (*str >= 32 && *str <= 47)
			|| (*str >= 58 && *str <= 126)) && *str != '+' && *str != '-')
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		answer = (answer * 10) + (*str - 48);
		str++;
	}
	return (answer * minus);
}
