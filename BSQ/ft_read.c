/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 00:53:14 by byan              #+#    #+#             */
/*   Updated: 2021/10/24 19:24:09 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

void	ft_read_eliments(t_bsq *data)
{
	char	temp;

	data->file = open(data->f_name, O_RDONLY);
	data->eliments_len = 0;
	while (read(data->file, &temp, 1) != 0 && temp != '\n')
		data->eliments_len++;
	close(data->file);
	data->file = open(data->f_name, O_RDONLY);
	while (read(data->file, &temp, 1) != 0 && --data->eliments_len >= 3 )
		data->map_row = data->map_row * 10 + (temp - 48);
	if (read(data->file, &temp, 1) && !(temp > 0 && temp <= 255))
		data->empty = (unsigned char)temp;
	if (read(data->file, &temp, 1) && !(temp > 0 && temp <= 255))
		data->obs = (unsigned char)temp;
	if (read(data->file, &temp, 1) && !(temp > 0 && temp <= 255))
		data->fill = (unsigned char)temp;
	close(data->file);
}

/* map full size (while != '\0') */
int	ft_size(t_bsq *data)
{
	int		tem_file;
	int		size;
	char	temp;

	size = 0;
	tem_file = open(data->f_name, O_RDONLY);
	while (read(tem_file, &temp, 1) != 0)
		size++;
	size = size - data->eliments_len;
	close(tem_file);
	return (size);
}

/* set everything */
void	ft_set_num_col(t_bsq *data)
{
	char	*temp;
	int		temp_size;
	int		temp_row;

	data->file = open(data->f_name, O_RDONLY);
	data->map_col = 0;
	temp_row = 1;
	read(data->file, &temp, data->eliments_len + 1);
	while (read(data->file, &temp, 1) != 0)
	{
		if (temp == '\n')
			temp_row++;
		if (temp_row == 1)
			data->map_col++;
	}
	if (data->map_col <= 0 || data->map_row != data->read_row)
		ft_map_error(data);
	close(data->file);
	temp_size = ft_size(data);
	if (temp_size != data->map_row * data->map_col + data->map_row - 1)
		ft_map_error(data);
}

void	ft_no_argv(t_bsq *data)
{
	int		i;
	char	temp;
	char	buf[10000];
	data->file = open("no_argv", O_RDWR | O_CREAT, 0777);
	i = read(0, buf, 10000);
	if(write(data->file, buf, i) < 0)
		ft_map_error(data);
}