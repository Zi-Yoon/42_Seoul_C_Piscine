/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_header.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:50:58 by byan              #+#    #+#             */
/*   Updated: 2021/10/25 13:44:16 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAIN_HEADER_H
# define FT_MAIN_HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "ft_final.h"
# include "ft_bsq.h"
# include "ft_make.h"
# include "ft_read.h"

typedef struct s_bsq
{
	char	*f_name;
	int		file;
	int		eliments_len;
	char	obs;
	char	empty;
	char	fill;
	int		last_file_num;
	int		now_file_num;
	int		error;
	int		map_row;
	int		map_col;
	int		**map;
	int		max;
	int		ans_x;
	int		ans_y;
	char	**c_map;
	char	temp[1000];
}					t_bsq;

t_bsq	ft_read_eliments(t_bsq data);
int		ft_size(t_bsq data);
t_bsq	ft_set_num_col(t_bsq data);
t_bsq	ft_no_argv(t_bsq data);
t_bsq	ft_no_argv_two(t_bsq data);
void	ft_putstr(char *str);
t_bsq	ft_draw_map(t_bsq data);
t_bsq	ft_make_print_bsq(t_bsq data);
t_bsq	ft_map_error(t_bsq data);
int		ft_min_three(int a, int b, int c);
t_bsq	ft_make_box(t_bsq data);
t_bsq	ft_make_filled_box(t_bsq data);
t_bsq	ft_make_len_map(t_bsq data);
t_bsq	ft_start_run(char *argv, t_bsq data);
t_bsq	ft_map_reset(t_bsq data);
char	*ft_strcpy(char *dest, char *src);
t_bsq	ft_find_max_len(t_bsq data);
t_bsq	ft_find_ans_x_y(t_bsq data);

#endif
