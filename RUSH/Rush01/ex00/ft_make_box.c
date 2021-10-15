/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_box.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 23:42:34 by byan              #+#    #+#             */
/*   Updated: 2021/10/16 00:39:38 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int check_available()
{
	
}

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
	return (box);
}

