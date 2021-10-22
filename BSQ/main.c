#include "ft_read.h"
#include "ft_read_make.h"
#include "ft_send_ans.h"
#include "ft_bsq.h"

void ft_putstr(char *str);
char **ft_draw_map(int **map, int len, int map_row, int map_col);
char **ft_make_bsq(char **ans_map, int len, int ans_x, int ans_y);
void ft_print_bsq(char **ans_map, int map_row, int map_col);
int ft_min_three(int a, int b, int c);
int **ft_make_empty_box(int map_row, int map_col);
int **ft_make_real_box(char *f_name, int **box, int map_row, int map_col);
int **ft_make_len_map(int **map, int map_row, int map_col);
int ft_find_max_len(int **map, int map_row, int map_col);
int ft_open_read(char *f_name);
int ft_file_size(char *f_name);
int ft_num_row(char *f_name);
int ft_num_col(char *f_name);
int ft_check_rec(int size, int map_row, int map_col);
int ft_ans_x(int **map, int max_len, int map_row, int map_col);
int ft_ans_y(int **map, int max_len, int map_row, int map_col);
void	ft_start(char *f_name);
int		**ft_return_num_map(char *f_name, int map_row, int map_col);
void	**ft_return_print_map(int **num_map, int max_len,
		int map_row, int map_col);

int	main(int argc, char *argv[])
{
	char	*f_name;
	int		i;

	i = 0;
	if (argc == 1)
	{
		return (0);
	}
	else if (argc == 2)
	{
		ft_start(argv[1]);
	}
	else if (argc >= 3)
	{
		while (++i < argc)
			ft_start(argv[i]);
	}
	return (0);
}

void	ft_start(char *f_name)
{
	int		**num_map;
	int		max_len;
	int		map_row;
	int		map_col;

	map_row = ft_num_row(f_name);
	map_col = ft_num_col(f_name);
	if (ft_check_rec(ft_file_size(f_name), map_row, map_col))
	{
		num_map = ft_return_num_map(f_name, map_row, map_col);
		ft_return_print_map(num_map, ft_find_max_len
			(num_map, map_row, map_col), map_row, map_col);
	}
	else
		write(1, "map error\n", 10);
	free(num_map);
}

int	**ft_return_num_map(char *f_name, int map_row, int map_col)
{
	int	**arr;

	arr = ft_make_empty_box(map_row, map_col);
	arr = ft_make_len_map(ft_make_real_box
			(f_name, arr, map_row, map_col), map_row, map_col);
	return (arr);
}

void	**ft_return_print_map(int **num_map, int max_len,
		int map_row, int map_col)
{
	char	**arr;
	int		ans_x;
	int		ans_y;

	ans_x = ft_ans_x(num_map, max_len, map_row, map_col);
	ans_y = ft_ans_y(num_map, max_len, map_row, map_col);
	arr = ft_draw_map(num_map, max_len, map_row, map_col);
	ft_print_bsq(ft_make_bsq(arr, max_len, ans_x, ans_y), map_row, map_col);
	free(arr);
}
