/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <sss@student.42seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:03:04 by byan              #+#    #+#             */
/*   Updated: 2021/10/11 15:45:00 by byan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_i_sort(int *tab, int i, int start, int end)
{
	int	pivot;

	pivot = start;
	while (i <= end && tab[i] <= tab[pivot])
	{
		i++;
	}
	return (i);
}

int	ft_j_sort(int *tab, int j, int start, int end)
{
	int	pivot;

	pivot = start;
	while (j > start && tab[j] >= tab[pivot])
	{
		j--;
	}
	return (j);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_quick_sort(int *tab, int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	if (start >= end)
	{
		return ;
	}
	pivot = start;
	i = pivot + 1;
	j = end;
	while (i <= j)
	{
		i = ft_i_sort(tab, i, start, end);
		j = ft_j_sort(tab, j, start, end);
		if (i > j)
			ft_swap(&tab[j], &tab[pivot]);
		else
			ft_swap(&tab[i], &tab[j]);
	}
	ft_quick_sort(tab, start, j - 1);
	ft_quick_sort(tab, j + 1, end);
}

void	ft_sort_int_tab(int *tab, int size)
{
	ft_quick_sort(tab, 0, size - 1);
}
