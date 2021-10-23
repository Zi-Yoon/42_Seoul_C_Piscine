/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:49 by byan              #+#    #+#             */
/*   Updated: 2021/10/22 21:06:16 by byan             ###   ########seoul.kr  */
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

char	**ft_draw_map(int **map, int len, int map_row, int map_col)
{
	int		i;
	int		x;
	int		y;
	char	**ans_map;

	i = -1;
	ans_map = (char **)malloc(sizeof(char *) * map_row);
	while (++i < map_col)
		ans_map[i] = (char *)malloc(sizeof(char) * map_col + 1);
	x = -1;
	while (++x < map_row)
	{
		y = -1;
		while (++y < map_col)
		{
			if (map[x][y] == 0)
				ans_map[x][y] = 'o';
			else
				ans_map[x][y] = '.';
		}
		ans_map[x][y] = '\0';
	}
	return (ans_map);
}

char	**ft_make_bsq(char **ans_map, int len, int ans_x, int ans_y)
{
	int	x;
	int	y;
	int	x_len;
	int	y_len;

	x = ans_x;
	y = ans_y;
	x_len = len + 1;
	y_len = len + 1;
	while (--x_len)
	{
		while (--y_len)
		{
			ans_map[x][y] = 'X';
			y--;
		}
		x--;
	}
	return (ans_map);
}

void	ft_print_bsq(char **ans_map, int map_row, int map_col)
{
	int	i;

	i = -1;
	while (++i < map_row)
	{
		ft_putstr(ans_map[i]);
		write(1, "\n", 1);
	}
}
