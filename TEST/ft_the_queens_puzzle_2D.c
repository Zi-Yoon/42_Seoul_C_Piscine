/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_the_queens_puzzle_2D.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:50:42 by byan              #+#    #+#             */
/*   Updated: 2021/10/19 17:18:01 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	queen_position[10];
int soulution;



int **ft_put_queen(int **arr, int x, int y)
{
	int i;
	int temp_x;
	int temp_y;

	i = -1;
	while (i++ < 10)
	{
		arr[x][i] *= 0;
		arr[i][y] *= 0;
	}
	temp_x = x;
	temp_y = y;
	while (temp_x-- >= 0 && temp_y-- >= 0)
		arr[temp_x][temp_y] *= 0;
	while (temp_x++ < 10 && temp_y++ < 10)
		arr[temp_x][temp_y] *= 0;
	temp_x = x;
	temp_y = y;
	while (temp_x++ < 10 && temp_y-- >= 0)
		arr[temp_x][temp_y] *= 0;
	while (temp_x-- >= 0 && temp_y++ < 10)
		arr[temp_x][temp_y] *= 0;
	return (arr);
}

void backtracking()
{
	
}

int **ft_find_one(int **arr, int count)
{
	int x;
	int y;
	int	available;

	x = count;
	y = 0;
	available = 1;
	if (count == 10)
		return (arr);
	while (!arr[x][y])
	{
		if (y == 9)
		{
			available = 0;
			return (arr);
		}
		y++;
	}
	if(available)
	{
		ft_put_queen(arr, x, y);
		count++;
	}
	else
	{
		return ;
	}
	ft_find_one(arr, count);
}

int	**ft_reset_chess(int **arr)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (i++ < 10)
		while (j++ < 10)
			arr[i][j] = 1;
	ft_find_one (arr, 0);
}

int	ft_the_queens_puzzle(void)
{
	int **arr;

	arr = ft_reset_chess(arr);
	return (0);
}
