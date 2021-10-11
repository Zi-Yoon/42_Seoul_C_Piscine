/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:15 by byan              #+#    #+#             */
/*   Updated: 2021/10/10 20:43:18 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_end(char *arr, int index, int n)
{
	int	check_end;
	int	i;

	check_end = 0;
	i = 0;
	arr[index]--;
	index = n - 1;
	while (i < n)
	{
		if (arr[index] == '9' - i)
		{
			check_end++;
		}
		index--;
		i++;
	}
	if (check_end == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_print_num(char *arr, int n)
{
	int	i;
	char c_arr;
	char a;
	char b;

	i = 0;
	
	a = ',';
	b = ' ';
	while (i < n)
	{
		c_arr = arr[i];
		write(1, &c_arr, 1);
		i++;
	}
	if (ft_check_end(arr, n, n) == 1)
	{
		return ;
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		return ;
	}
}

int	ft_make_combn(char *arr, int check_size, int i, int n)
{
	while (arr[n - i] == '9' - i + 1)
	{
		check_size++;
		i++;
	}
	if (check_size > 0)
	{
		arr[n - 1 - check_size]++;
		while (check_size > 0)
		{
			arr[n - check_size] = arr[n - 1 - check_size] + 1;
			check_size--;
		}
	}
	else
	{
		arr[n - 1]++;
	}
}

void	ft_print_combn(int n)
{
	int		index;
	char	arr[100];
	int		i;
	int		check_size;

	index = 0;
	while (index < n-1)
	{
		arr[index] = '0' + index;
		index++;
	}
	arr[index] = arr[index - 1];
	while (ft_check_end(arr, n, n) != 1)
	{
		i = 1;
		check_size = 0;
		ft_make_combn(arr, check_size, i, n);
		ft_print_num(arr, n);
	}
}
