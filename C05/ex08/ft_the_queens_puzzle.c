/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_the_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:16:33 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 18:14:12 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	g_board[10];
int	g_count = 0;

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}

void	ft_print_board(void)
{
	int		i;
	char	c;

	i = -1;
	while (++i < 10)
	{
		c = '0' + g_board[i];
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	ft_tracking_queens(int index)
{
	int	i;

	i = -1;
	while (++i < index)
		if (g_board[index] == g_board[i]
			|| index - i == ft_abs(g_board[index] - g_board[i]))
			return (0);
	return (1);
}

void	ft_re_queens(int index)
{
	int	i;

	if (index == 10)
	{
		ft_print_board();
		g_count++;
	}
	i = -1;
	while (++i < 10)
	{
		g_board[index] = i;
		if (ft_tracking_queens(index))
			ft_re_queens(index + 1);
	}
}

int	ft_ten_queens_puzzle(void)
{
	ft_re_queens(0);
	return (g_count);
}
