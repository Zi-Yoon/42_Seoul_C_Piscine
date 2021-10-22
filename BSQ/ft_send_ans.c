#include "ft_send_ans.h"

int	ft_ans_x(int **map, int max_len, int map_row, int map_col)
{
	int	x;
	int	y;

	x = -1;
	while (x++ < map_row)
	{
		y = -1;
		while (y++ < map_col)
		{
			if (map[x][y] == max_len)
			{
				return (x);
			}
		}
	}
	return (0);
}

int	ft_ans_y(int **map, int max_len, int map_row, int map_col)
{
	int	x;
	int	y;

	x = -1;
	while (x++ < map_row)
	{
		y = -1;
		while (y++ < map_col)
		{
			if (map[x][y] == max_len)
			{
				return (y);
			}
		}
	}
	return (0);
}
