/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:50:45 by byan              #+#    #+#             */
/*   Updated: 2021/10/13 00:55:52 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (1 <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	ans;

	ans = ft_is_prime(nb);
	if (ans == 1)
	{
		return (nb);
	}
	else
	{
		if (nb % 2 == 0)
			nb++;
		while (1)
		{
			if (ft_is_prime(nb) == 1)
				return (nb);
			nb = nb + 2;
		}
	}
}
