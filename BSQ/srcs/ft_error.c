/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:15:27 by byan              #+#    #+#             */
/*   Updated: 2021/10/26 20:35:48 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

t_bsq	ft_check_read(t_bsq data)
{
	int		i_temp;
	char	temp;

	i_temp = open(data.f_name, O_RDONLY);
	if (read(i_temp, &temp, 1) < 0)
		data = ft_map_error(data);
	if (i_temp < 0)
		data = ft_map_error(data);
	close(i_temp);
	return (data);
}

t_bsq	ft_map_error(t_bsq data)
{
	if (data.error == 0)
		write(2, "map error\n", 10);
	data.error = 1;
	if (data.last_file_num == data.now_file_num)
		exit(0);
	return (data);
}

int	ft_min_three(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else if (c <= a && c <= b)
		return (c);
	else
		return (0);
}

t_bsq	ft_map_reset(t_bsq data)
{
	data.map_row = 0;
	data.map_col = 0;
	data.eliments_len = 0;
	data.ans_x = 0;
	data.ans_y = 0;
	data.error = 0;
	data.empty = 0;
	data.f_name = 0;
	data.fill = 0;
	data.obs = 0;
	data.temp[0] = 0;
	return (data);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
