/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:21 by byan              #+#    #+#             */
/*   Updated: 2021/10/28 11:20:22 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main_header.h"

int	main(int argc, char *argv[])
{
	t_bsq	data;

	data.last_file_num = argc - 1;
	data.now_file_num = 0;
	if (argc == 1)
	{
		data.now_file_num = 1;
		data = ft_no_argv(data);
		data = ft_no_argv_two(data);
		data = ft_map_reset(data);
		ft_start_run("no_argv", data);
		return (0);
	}
	else
	{
		while (++data.now_file_num < argc)
		{
			data = ft_map_reset(data);
			data = ft_start_run(argv[data.now_file_num], data);
		}
		return (0);
	}
}
