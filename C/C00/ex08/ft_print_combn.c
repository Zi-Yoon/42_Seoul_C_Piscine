/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:15 by byan              #+#    #+#             */
/*   Updated: 2021/10/10 18:39:40 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_num(char *arr, int size);

int		ft_check_end(char *arr, int size);

int	ft_reset(char *arr, int index, int n)
{
	while (index < n)
	{
		arr[index] = '0' + index;
		index++;
	}
	return (index);
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
	char	arr[1000000000];
	int		i;
	int		check_size;

	index = 0;
	index = ft_reset(arr, index, n);
	arr[index]--;
	while (ft_check_end(arr, n) != 1)
	{
		i = 1;
		check_size = 0;
		ft_make_combn(arr, check_size, i, n);
		ft_print_num(arr, n);
	}
}
