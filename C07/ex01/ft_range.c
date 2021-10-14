/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 04:03:02 by byan              #+#    #+#             */
/*   Updated: 2021/10/14 20:23:25 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * size);
	while (min < max)
	{
		arr[i++] = min++;
	}
	return (arr);
}
