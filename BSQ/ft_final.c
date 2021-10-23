/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:01:40 by byan              #+#    #+#             */
/*   Updated: 2021/10/23 15:23:14 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_final.h"

int	**ft_start(char *f_name)
{
	int		**num_map;
	int		file;
	int		given_row;
	char	fill;
	char	empty;

	file = ft_open_read(f_name);
	given_row = ft_read_row(file);
	empty = ft_read_empty(file);
	fill = ft_read_fill(file);
	num_map = start2(file);
	return (num_map);
}

int **start2(int file)
{
	int		max_len;
	int		map_row;
	int		map_col;

	map_col = ft_num_col(file);
	map_row = ft_num_row(file);
	if ( != map_row)
	{
		// error
	}
	if (ft_check_rec(ft_file_size(file), map_row, map_col))
	{
		num_map = ft_return_num_map(file, map_row, map_col);
		ft_return_print_map(num_map, ft_find_max_len
			(num_map, map_row, map_col), map_row, map_col);
	}
	else
		// error

}

int	**ft_return_num_map(char *f_name, int map_row, int map_col)
{
	int	**arr;

	arr = ft_make_empty_box(map_row, map_col);
	arr = ft_make_len_map(ft_make_real_box
			(f_name, arr, map_row, map_col), map_row, map_col);
	return (arr);
}

void	**ft_return_print_map(int **num_map, int max_len,
		int map_row, int map_col)
{
	char	**arr;
	int		ans_x;
	int		ans_y;

	ans_x = ft_ans_x(num_map, max_len, map_row, map_col);
	ans_y = ft_ans_y(num_map, max_len, map_row, map_col);
	arr = ft_draw_map(num_map, max_len, map_row, map_col);
	ft_print_bsq(ft_make_bsq(arr, max_len, ans_x, ans_y), map_row, map_col);
	free(arr);
}
