/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangypar <sangypar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:21:39 by sangypar          #+#    #+#             */
/*   Updated: 2021/10/09 19:09:11 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_width(int x, int y)
{
	if (x < 0)
	{
		ft_putchar('A');
		ft_putchar('\n');
		while (y > 2)
		{
			ft_putchar('B');
			ft_putchar('\n');
			y--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('A');
		while (x > 0)
		{
			ft_putchar('B');
			x--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	put_width_edge(int i)
{
	ft_putchar('B');
	while (i > 0)
	{
		ft_putchar(' ');
		i--;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void	put_width_reverse(int i)
{
	ft_putchar('C');
	while (i > 0)
	{
		ft_putchar('B');
		i--;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

int	check_one(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return (0);
	}
	else if (y == 1)
	{
		put_width (x - 2, 0);
		return (0);
	}
	else if (x == 1)
	{
		put_width (-1, y);
		return (0);
	}
	else
	{
		return (1);
	}
}

void	rush(int x, int y)
{
	int	temp_x;
	int	temp_y;

	if (x <= 0 || y <= 0)
		return ;
	if (check_one(x, y) == 0)
		return ;
	else
	{
		temp_x = x - 2;
		temp_y = y - 2;
		put_width(temp_x, 0);
		while (temp_y > 0)
		{
			put_width_edge(temp_x);
			temp_y--;
		}
		put_width_reverse(temp_x);
		return ;
	}
}
