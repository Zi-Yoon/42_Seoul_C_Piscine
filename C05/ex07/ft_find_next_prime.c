/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:50:45 by byan              #+#    #+#             */
/*   Updated: 2021/10/21 21:57:28 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_prime(nb) == 1)
		return (nb);
	else
	{
		while (1)
		{
			if (ft_prime(nb) == 1)
				return (nb);
			nb++;
		}
	}
}
