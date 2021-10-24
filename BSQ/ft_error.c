/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:15:27 by byan              #+#    #+#             */
/*   Updated: 2021/10/24 15:37:23 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

void	ft_map_error(t_bsq *data)
{
	if(data->error == 0)
		write(1, "map error\n", 10);
	data->error = 1;
	if (data->last_file_num == data->now_file_num)
		exit(0);
}