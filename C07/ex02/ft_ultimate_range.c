/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 04:03:19 by byan              #+#    #+#             */
/*   Updated: 2021/10/14 21:00:28 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	size = max - min;
	i = 0;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc(sizeof(**range) * size);
	if (arr == 0)
		return (-1);
	while (i < size)
		arr[i++] = min++;
	*range = arr;
	return (size);
}
