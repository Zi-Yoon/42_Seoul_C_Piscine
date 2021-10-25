/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 00:53:14 by byan              #+#    #+#             */
/*   Updated: 2021/10/25 13:37:48 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

t_bsq	ft_read_eliments(t_bsq data)
{
	char	temp;
	int		i;

	data.file = open(data.f_name, O_RDONLY);
	data.eliments_len = 0;
	data.map_row = 0;
	while (read(data.file, &temp, 1) != 0 && temp != '\n')
		data.eliments_len++;
	close(data.file);
	i = data.eliments_len;
	data.file = open(data.f_name, O_RDONLY);
	while (--i >= 3)
	{
		read(data.file, &temp, 1);
		data.map_row = data.map_row * 10 + (temp - 48);
	}
	if (read(data.file, &temp, 1) && (temp > 0))
		data.empty = temp;
	if (read(data.file, &temp, 1) && (temp > 0))
		data.obs = temp;
	if (read(data.file, &temp, 1) && (temp > 0))
		data.fill = temp;
	close(data.file);
	return (data);
}

/* map full size (while != '\0') */
int	ft_size(t_bsq data)
{
	int		tem_file;
	int		size;
	char	temp;

	size = 0;
	tem_file = open(data.f_name, O_RDONLY);
	while (read(tem_file, &temp, 1) != 0)
		size++;
	size = size - data.eliments_len - 1;
	close(tem_file);
	return (size);
}

/* set everything */
t_bsq	ft_set_num_col(t_bsq data)
{
	char	temp;
	int		temp_size;
	int		temp_row;

	data.file = open(data.f_name, O_RDONLY);
	data.map_col = -1;
	temp_row = 0;
	while (read(data.file, &temp, 1) != 0 && temp != '\n')
		;
	while (read(data.file, &temp, 1) != 0)
	{
		if (temp_row == 0)
			data.map_col++;
		if (temp == '\n')
			temp_row++;
	}
	if (data.map_col <= 0 || data.map_row != temp_row)
		data = ft_map_error(data);
	close(data.file);
	temp_size = ft_size(data);
	if (temp_size != data.map_row * data.map_col + data.map_row)
		data = ft_map_error(data);
	return (data);
}

t_bsq	ft_no_argv(t_bsq data)
{
	int		i;
	int		len;
	char	tmp;

	i = -1;
	len = 0;
	data.map_row = 0;
	data.file = open("no_argv1", O_RDWR | O_CREAT, 0777);
	while (1)
	{
		write(data.file, &tmp, read(0, &tmp, 1));
		data.temp[++i] = tmp;
		if (tmp == '\n')
			break ;
		len++;
	}
	data.temp[i] = '\n';
	i = -1;
	while (++i < len - 3)
		data.map_row = data.map_row * 10 + (data.temp[i] - 48);
	data.eliments_len = len;
	return (data);
}

t_bsq	ft_no_argv_two(t_bsq data)
{
	int		i;
	char	temp;
	char	file[1000];

	i = 0;
	data.file = open("no_argv2", O_RDWR | O_CREAT, 0777);
	ft_strcpy(file, data.temp);
	write(data.file, &file, data.eliments_len + 1);
	while (i < data.map_row)
	{
		write(data.file, &temp, read(0, &temp, 1));
		if (temp == '\n')
			i++;
	}
	data.f_name = "no_argv2";
	return (data);
}
