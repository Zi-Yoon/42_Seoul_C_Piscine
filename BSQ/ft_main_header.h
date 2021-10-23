/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_header.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:50:58 by byan              #+#    #+#             */
/*   Updated: 2021/10/23 03:10:11 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAIN_HEADER_H
# define FT_MAIN_HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "ft_final.h"
# include "ft_bsq.h"
# include "ft_send_ans.h"
# include "ft_read_make.h"
# include "ft_read_second.h"
# include "ft_read_first.h"

void			ft_start(char *f_name);
int				**ft_return_num_map(char *f_name, int map_row, int map_col);
void			ft_putstr(char *str);
char			**ft_draw_map(int **map, int len, int map_row, int map_col);
char			**ft_make_bsq(char **ans_map, int len, int ans_x, int ans_y);
void			ft_print_bsq(char **ans_map, int map_row, int map_col);
int				ft_min_three(int a, int b, int c);
int				**ft_make_empty_box(int map_row, int map_col);
int				**ft_make_real_box(char *f_name, int **box, int map_row, int map_col);
int				**ft_make_len_map(int **map, int map_row, int map_col);
int				ft_find_max_len(int **map, int map_row, int map_col);
int				ft_open_read(char *f_name);
int				ft_file_size(char *f_name);
int				ft_num_row(char *f_name);
int				ft_num_col(char *f_name);
int				ft_check_rec(int size, int map_row, int map_col);
int				ft_ans_x(int **map, int max_len, int map_row, int map_col);
int				ft_ans_y(int **map, int max_len, int map_row, int map_col);
void			ft_start(char *f_name);
int				**ft_return_num_map(char *f_name, int map_row, int map_col);
void			**ft_return_print_map(int **num_map, int max_len,
				int map_row, int map_col);
int				ft_read_row(char *f_name);
unsigned char	t_read_empty(char *f_name);
unsigned char	ft_read_fill(char *f_name);

#endif
