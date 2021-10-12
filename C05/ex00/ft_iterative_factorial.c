/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:24:08 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 22:30:15 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fac;
	int i;

	if (nb < 0)
		return (0);
	i = nb;
	fac = 1;
	while (i > 0)
	{
		fac = fac * i;
		i--;
	}
	return (fac);
}
