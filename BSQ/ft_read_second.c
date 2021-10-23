/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_second.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:32:39 by byan              #+#    #+#             */
/*   Updated: 2021/10/23 14:59:49 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_second.h"

/* must run in this order read_row -> empty -> fill */
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
	return (row);
}

unsigned char ft_read_empty(int file)
{
	int		temp;
	char	empty;

	read(file, &temp, 1);
	if (read(file, &temp, 1) && !(temp > 0 && temp <= 255))
		empty = (unsigned char)temp;
	return (empty);
}

unsigned char ft_read_fill(int file)
{
	int		temp;
	char	fill;

	if (read(file, &temp, 1) && !(temp > 0 && temp <= 255))
		fill = (unsigned char)temp;
	return (fill);
}