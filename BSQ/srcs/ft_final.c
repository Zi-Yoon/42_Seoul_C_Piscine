/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:01:40 by byan              #+#    #+#             */
/*   Updated: 2021/10/25 00:18:20 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_final.h"

/* Run in main function */
t_bsq	ft_start_run(char *argv, t_bsq data)
{
	data.f_name = argv;
	data = ft_read_eliments(data);
	data = ft_set_num_col(data);
	data = ft_make_box(data);
	data = ft_draw_map(data);
	data = ft_make_print_bsq(data);
	free(*data.c_map);
	free(data.c_map);
	free(data.map);
	return (data);
}
