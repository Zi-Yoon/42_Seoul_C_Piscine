/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:21 by byan              #+#    #+#             */
/*   Updated: 2021/10/22 21:10:41 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main_header.h"

int	main(int argc, char *argv[])
{
	char	*f_name;
	int		i;

	i = 0;
	if (argc == 1)
	{
		return (0);
	}
	else if (argc == 2)
	{
		ft_start(argv[1]);
	}
	else if (argc >= 3)
	{
		while (++i < argc)
			ft_start(argv[i]);
	}
	return (0);
}

