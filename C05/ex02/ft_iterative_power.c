/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:50:54 by byan              #+#    #+#             */
/*   Updated: 2021/10/13 00:54:07 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;
	int	cnt;

	ans = 1;
	cnt = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (ans);
	while (cnt < power)
	{
		ans *= nb;
		cnt++;
	}
	return (ans);
}
