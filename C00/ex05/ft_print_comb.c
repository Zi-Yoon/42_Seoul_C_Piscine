/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:07 by byan              #+#    #+#             */
/*   Updated: 2021/10/10 17:29:07 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_check_end(char *arr, int size)
{
	int	index;
	int	check_end;
	int	i;

	index = size - 1;
	check_end = 0;
	i = 0;
	while (i < size)
	{
		if (arr[index] == '9' - i)
		{
			check_end++;
		}
		index--;
		i++;
	}
	if (check_end == size)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_print_num(char *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(arr[i]);
		i++;
	}
	if (ft_check_end(arr, size) == 1)
	{
		return ;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
		return ;
	}
}

void	ft_change_arr(char *arr)
{
	int	i;
	int	check_size;

	i = 1;
	check_size = 0;
	while (arr[3 - i] == '9' - i + 1)
	{
		check_size++;
		i++;
	}
	if (check_size > 0)
	{
		arr[2 - check_size]++;
		while (check_size > 0)
		{
			arr[3 - check_size] = arr[2 - check_size] + 1;
			check_size--;
		}
	}
	else
	{
		arr[2]++;
	}
}

void	ft_print_comb(void)
{
	int		n;
	int		index;
	char	arr[3];

	n = 3;
	index = 0;
	arr[0] = '0';
	arr[1] = '1';
	arr[2] = '1';
	while (ft_check_end(arr, 3) != 1)
	{
		ft_change_arr(arr);
		ft_print_num(arr, 3);
	}
	return ;
}
