/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:01:40 by byan              #+#    #+#             */
/*   Updated: 2021/10/24 19:39:50 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_final.h"

/* Run in main function */
void	ft_start_run(char *argv[], t_bsq *data)
{
	int	fr;

	fr = -1;
	data->f_name = argv[data->now_file_num];
	ft_read_eliments(data);
	ft_set_num_col(data);
	ft_make_box(data);
	ft_draw_map(data);
	ft_make_print_bsq(data);
	while(++fr < data->map_row)
	{
		free(data->map[fr]);
		free(data->c_map[fr]);
	}
	free(data->map);
	free(data->c_map);
}
