/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:02:33 by byan              #+#    #+#             */
/*   Updated: 2021/10/18 13:10:11 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	cnt;
	int	minus;
	int	answer;

	cnt = 0;
	minus = 1;
	answer = 0;
	while (str[cnt] == ' ' || (str[cnt] >= 9 && str[cnt] <= 13))
		cnt++;
	if (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			minus *= -1;
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		answer = (answer * 10) + (str[cnt] - 48);
		cnt++;
	}
	return (answer * minus);
}
