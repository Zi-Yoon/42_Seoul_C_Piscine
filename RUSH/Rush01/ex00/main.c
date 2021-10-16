/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 23:23:32 by byan              #+#    #+#             */
/*   Updated: 2021/10/16 20:47:18 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_make_box.c"

int *set_box[4];
int **make_box(int size);

int ft_find_spc(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
			cnt++;
		str++;
	}
	if (cnt != 0)
		cnt++;
	return (cnt);
}

int	ft_atoi_one(char *str)
{
	int	cnt;
	int	answer;

	cnt = 0;
	answer = 0;
	while (str[cnt] == ' ' || (str[cnt] >= 9 && str[cnt] <= 13))
		cnt++;
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		answer = (answer * 10) + (str[cnt] - 48);
		cnt++;
	}
	return (answer);
}

int	**ft_make_check(char *str, int size)
{
	int	i;
	int	j;
	int *temp[4];

	i = 0;
	while (i < 4)
		temp[i++] = (int)malloc(sizeof(int) * size);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while(j < size)
			temp[i][j++] = ft_atoi_one(str++);
		i++;
	}
	return (temp);
}

int ft_check_available(int **check_box, int size)
{
	int i;
	int j;
	int cnt;

	i = 0;
	j = 0;
	cnt = 0;
	while (i < 4)
	{
		while (j < size)
		{
			if (check_box[i][j++] == 1)
				cnt++;
		}
	}
	return (cnt);
}

int	main(int argc, char *argv[])
{
	int i;
	int j;
	int size;
	int **check_box;

	i = 0;
	j = 0;
	size = (ft_find_spc(argv[1]));
	if (size % 4 != 0)
		retrun (0); //error
	size /= 4;
	check_box = ft_make_check(argv[1], size);
	if (ft_check_available(check_box, size) < 2)
		return (0); //error
	make_box(size);
}