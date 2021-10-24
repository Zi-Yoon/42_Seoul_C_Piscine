/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:43 by byan              #+#    #+#             */
/*   Updated: 2021/10/24 23:25:06 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_make.h"

int	ft_min_three(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else if (c <= a && c <= b)
		return (c);
	else
		return (0);
}

/* run this function */
t_bsq	ft_make_box(t_bsq data)
{
	int	i;

	i = -1;
	data.map = (int **)malloc(sizeof(int *) * data.map_row);
	while (++i < data.map_col)
		data.map[i] = (int *)malloc(sizeof(int) * data.map_col);
	data = ft_make_filled_box(data);
	return (data);
}

t_bsq	ft_make_filled_box(t_bsq data)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	data.file = open(data.f_name, O_RDONLY);
	while (read(data.file, &temp, 1) != 0 && temp != '\n');
	while (i < data.map_row)
	{
		j = -1;
		while (++j <= data.map_col)
		{
			read(data.file, &temp, 1);
			if (temp == data.empty)
				data.map[i][j] = 1;
			else if (temp == data.obs)
				data.map[i][j] = 0;
			else if (temp == '\n')
				i++;
			else
				data = ft_map_error(data);
		}
	}
	close(data.file);
	data = ft_make_len_map(data);
	return (data);
}

t_bsq	ft_make_len_map(t_bsq data)
{
	int	x;
	int	y;

	x = 0;
	while (++x < data.map_row)
	{
		y = 0;
		while (++y < data.map_col)
		{
			if (data.map[x][y] != 0)
				data.map[x][y] = ft_min_three(
					data.map[x - 1][y - 1], 
					data.map[x - 1][y], 
					data.map[x][y - 1]) + 1;
		}
	}
	x = data.map_row;
	data.max = 0;
	while (--x >= 0)
	{
		y = data.map_col;
		while (--y >= 0)
		{
			if (data.max < data.map[x][y])
			{
				data.max = data.map[x][y];
				data.ans_x = x;
				data.ans_y = y;
			}
		}
	}
	return (data);
}
