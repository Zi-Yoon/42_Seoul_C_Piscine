/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:15:27 by byan              #+#    #+#             */
/*   Updated: 2021/10/24 23:52:41 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

t_bsq	ft_map_error(t_bsq data)
{
	if(data.error == 0)
		write(1, "map error\n", 10);
	data.error = 1;
	if (data.last_file_num == data.now_file_num)
		exit(0);
	return (data);
}

t_bsq	ft_map_reset(t_bsq data)
{
	data.map_row = 0;
	data.map_col = 0;
	data.f_name = 0;
	data.eliments_len = 0;
	return (data);
}