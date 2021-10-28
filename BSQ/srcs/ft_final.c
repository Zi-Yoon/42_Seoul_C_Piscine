/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:01:40 by byan              #+#    #+#             */
/*   Updated: 2021/10/28 11:20:20 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_final.h"

/* Run in main function */
t_bsq	ft_start_run(char *argv, t_bsq data)
{
	data.f_name = argv;
	data = ft_check_read(data);
	if (data.error == 1)
		return (data);
	data = ft_read_eliments(data);
	if (data.error == 1)
		return (data);
	data = ft_set_num_col(data);
	if (data.error == 1)
		return (data);
	data = ft_make_box(data);
	data = ft_draw_map(data);
	if (data.error == 1)
	{
		data = ft_free_all(data);
		return (data);
	}
	data = ft_make_print_bsq(data);
	data = ft_free_all(data);
	return (data);
}

t_bsq	ft_free_all(t_bsq data)
{
	int	i;

	i = -1;
	while (++i < data.map_row)
	{
		free(data.c_map[i]);
		free(data.map[i]);
	}
	free(data.c_map);
	free(data.map);
	return (data);
}
