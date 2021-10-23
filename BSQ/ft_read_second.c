/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_second.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:39 by byan              #+#    #+#             */
/*   Updated: 2021/10/23 03:21:25 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_second.h"

int ft_read_row(char *f_name)
{
	int	file;
	int	temp;
	int	row;

	row = 0;
	file = ft_open_read(f_name);
	if (read(file, &temp, 1) && !(temp >= 0 && temp <= 9))
	{
		// error
		return (0);
	}
	while (temp >= 0 && temp <= 9)
	{
		row = row * 10 + temp;
		read(file, &temp, 1);
	}
	close(file);
	return (row);
}

unsigned char ft_read_empty(char *f_name)
{
	int		file;
	int		temp;
	char	empty;

	file = ft_open_read(f_name);
	read(file, &temp, 1);
	if (read(file, &temp, 1) && !(temp > 0 && temp <= 255))
		empty = (unsigned char)temp;
	close(file);
	return (empty);
}

unsigned char	ft_read_fill(char *f_name)
{
	int		file;
	int		temp;
	char	fill;

	file = ft_open_read(f_name);
	read(file, &temp, 1);
	read(file, &temp, 1);
	if (read(file, &temp, 1) && !(temp > 0 && temp <= 255))
		fill = (unsigned char)temp;
	close(file);
	return (fill);
}