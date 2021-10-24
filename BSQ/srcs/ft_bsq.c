/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:49 by byan              #+#    #+#             */
/*   Updated: 2021/10/24 23:36:20 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

t_bsq	ft_draw_map(t_bsq data)
{
	int	i;
	int	x;
	int	y;

	i = -1;
	data.c_map = malloc(sizeof(char *) * data.map_row);
	while(++i < data.map_row)
		data.c_map[i] = malloc(sizeof(char) * data.map_col + 1);
	x = -1;
	while (++x < data.map_row)
	{
		y = -1;
		while (++y < data.map_col)
		{
			if (data.map[x][y] == 0)
				data.c_map[x][y] = data.obs;
			else
				data.c_map[x][y] = data.empty;
		}
		data.c_map[x][y] = '\n';
	}
	return (data);
}

t_bsq	ft_make_print_bsq(t_bsq data)
{
	int	i;
	int x;
	int y;
	int	x_len;
	int	y_len;

	x = data.ans_x;
	x_len = 0;
	while (++x_len <= data.max)
	{
		y_len = 0;
		y = data.ans_y;
		while (++y_len <= data.max)
		{
			data.c_map[x][y] = data.fill;
			y--;
		}
		x--;
	}
	i = -1;
	while (++i < data.map_row)
		ft_putstr(data.c_map[i]);
	return (data);
}
