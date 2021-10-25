/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:21 by byan              #+#    #+#             */
/*   Updated: 2021/10/25 13:38:50 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main_header.h"

int	main(int argc, char *argv[])
{
	t_bsq	data;

	data.last_file_num = argc;
	data.now_file_num = 0;
	if (argc == 1)
	{
		data = ft_no_argv(data);
		data = ft_no_argv_two(data);
		data = ft_map_reset(data);
		ft_start_run("no_argv2", data);
		return (0);
	}
	else
	{
		while (++data.now_file_num < argc)
		{
			data.ans_x = 0;
			data.ans_y = 0;
			data.error = 0;
			data = ft_map_reset(data);
			data = ft_start_run(argv[data.now_file_num], data);
		}
		return (0);
	}
}
