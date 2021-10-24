/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:21 by byan              #+#    #+#             */
/*   Updated: 2021/10/24 19:40:14 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main_header.h"

int	main(int argc, char *argv[])
{
	char	**no_argv;
	t_bsq	*data;

	data = malloc(sizeof(t_bsq));
	data->last_file_num = argc;
	data->now_file_num = 0;
	data->ans_x = 0;
	data->ans_y = 0;
	if (argc == 1)
	{
		ft_no_argv(data);
		ft_start_run(argv, data);
		free(data);
		return (0);
	}
	else 
	{
		while (++data->now_file_num < argc)
		{
			data->error = 0;
			ft_start_run(argv, data);
			free(data);
		}
		return (0);
	}
}

