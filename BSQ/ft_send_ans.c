/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_ans.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:36 by byan              #+#    #+#             */
/*   Updated: 2021/10/22 20:49:57 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_send_ans.h"

int	ft_ans_x(int **map, int max_len, int map_row, int map_col)
{
	int	x;
	int	y;

	x = -1;
	while (x++ < map_row)
	{
		y = -1;
		while (y++ < map_col)
		{
			if (map[x][y] == max_len)
			{
				return (x);
			}
		}
	}
	return (0);
}

int	ft_ans_y(int **map, int max_len, int map_row, int map_col)
{
	int	x;
	int	y;

	x = -1;
	while (x++ < map_row)
	{
		y = -1;
		while (y++ < map_col)
		{
			if (map[x][y] == max_len)
			{
				return (y);
			}
		}
	}
	return (0);
}
