/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byan <sss@student.42seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:41:54 by byan              #+#    #+#             */
/*   Updated: 2021/10/11 21:31:00 by byan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_reset_hex(char *hexa)
{
	int i;

	i = 0;
	while (i < 10)
	{
		hexa[i] = '0' + i;
		i++;
	}
	i = 0;
	while (i < 6)
	{
		hexa[10+i] = 'a' + i;
		i++;
	}
	return (hexa);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		dec;
	int		temp1;
	int		temp2;
	char	hexa[17];

	i = 0;
	ft_reset_hex(hexa);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			dec = str[i];
			temp1 = dec / 16;
			temp2 = dec % 16;
			ft_putchar('\\');
			ft_putchar(hexa[temp1]);
			ft_putchar(hexa[temp2]);
		}
		i++;
	}
}

int main(){
	char abc[100] = "dsaf\nfdsa\adfkk\b\r";
	ft_putstr_non_printable(abc);
	printf("%s", abc);
	return 0;
}
