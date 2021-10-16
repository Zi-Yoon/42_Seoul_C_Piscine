/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_the_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:50:42 by byan              #+#    #+#             */
/*   Updated: 2021/10/16 14:42:06 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	**make_chess(void)
{
	int arr[10][10];
	int	i;
	int	j;

	while (i < 10)
	{
		while (j < 10)
		{
			arr[i][j] = 1;
			j++;
		}
		i++;
	}
}

int	ft_the_queens_puzzle(void)
{
	return (0);
}
