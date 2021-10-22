#include "ft_read_make.h"

int	ft_min_three(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else if (c <= a && c <= b)
		return (c);
}

/* run this function 1st to start */
int	**ft_make_empty_box(int map_row, int map_col)
{
	int	i;
	int	**empty_box;

	i = -1;
	empty_box = (int **)malloc(sizeof(int *) * map_row);
	while (++i < map_col)
		empty_box[i] = (int *)malloc(sizeof(int) * map_col);
	return (empty_box);
}

/* run this function 2nd to start */
int	**ft_make_real_box(char *f_name, int **map, int map_row, int map_col)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	while (i < map_row)
	{
		j = -1;
		while (++j < map_col)
		{
			read(ft_open_read(f_name), &temp, 1);
			if (temp == '.')
				map[i][j] = 1;
			else if (temp == 'o')
				map[i][j] = 0;
			else if (temp == '\n')
				i++;
			else
			{
				write(1, "map error\n", 10);
				return (0);
			}
		}
	}
	return (map);
}

int	**ft_make_len_map(int **map, int map_row, int map_col)
{
	int	x;
	int	y;

	x = 0;
	while (++x < map_row)
	{
		y = 0;
		while (++y < map_col)
		{
			if (map[x][y] != 0)
				map[x][y] = ft_min_three(
						map[x - 1][y - 1], map[x - 1][y], map[x][y - 1]);
		}
	}
	return (map);
}

int	ft_find_max_len(int **map, int map_row, int map_col)
{
	int	x;
	int	y;
	int	max;
	int	size;

	x = map_row;
	max = 0;
	while (--x >= 0)
	{
		y = map_col;
		while (--y >= 0)
		{
			if (max < map[x][y])
				max = map[x][y];
		}
	}
	return (max);
}
