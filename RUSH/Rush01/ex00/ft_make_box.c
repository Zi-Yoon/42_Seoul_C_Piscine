/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_box.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 23:42:34 by byan              #+#    #+#             */
/*   Updated: 2021/10/16 20:47:16 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int **make_box(int size)
{
	int **box;
	int i;

	i = 0;
	box = (int **)malloc(sizeof(int *) * size);
	while (i < size)
	{
		box[i] = (int *)malloc(sizeof(int) * size);
		i++;
	}

	int j;
	int k;
	j = 0;
	while (j < size)
	{
		k = 0;
		while (k < size)
		{
			box[j][k] = 1;
			k++;
		}
	}
	return (box);
}

int **put_short(int **box, int **check_box, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < size)
	{
		if (check_box[0][j] == size)
			box[0][j] = 1;
		if (check_box[1][j] == size)
			box[size - 1][j] = 1;
		if (check_box[2][j] == size)
			box[j][0] = 1;
		if (check_box[3][j] == size)
			box[j][size - 1] = 1;
		j++;
	}
}

int **put_short_to_long(int **box, int **check_box, int size)
{
	
}

int **put_longone(int **box, int **check_box, int size)
{
	int i;
	int j;
	int x;
	int y;

	i = -1;
	j = 0;
	while (j < size)
	{
		if (check_box[0][j] == 1)
			box[0][j] = size;
		if (check_box[1][j] == 1)
			box[size - 1][j] = size;
		if (check_box[2][j] == 1)
			box[j][0] = size;
		if (check_box[3][j] == 1)
			box[j][size - 1] = size;
		j++;
	}
}
