/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <byan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:41:54 by byan              #+#    #+#             */
/*   Updated: 2021/10/12 02:03:52 by byan             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_n(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_make_hex(unsigned long long num, int is_hex)
{
	char	*str;

	str = "0123456789abcdef";
	if (num < 16 && is_hex == 1)
		ft_putchar_n('0', 1);
	if (num >= 16)
	{
		ft_make_hex(num / 16, 0);
		ft_make_hex(num % 16, 0);
	}
	else
		ft_putchar_n(str[num], 1);
}

void	ft_print_to_char(unsigned char *c, int size)
{
	int i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 ==0)
			ft_putchar_n(' ', 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	

}