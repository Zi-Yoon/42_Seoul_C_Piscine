#include "ft_read.h"

/* file open */
int	ft_open_read(char *f_name)
{
	int	temp;

	temp = open(f_name, O_RDONLY);
	return (temp);
}

/* file size */
int	ft_file_size(char *f_name)
{
	int		file;
	int		size;
	char	temp;

	size = 0;
	file = ft_open_read(f_name);
	while (read(file, &temp, 1) != 0)
		size++;
	close(file);
	return (size);
}

/* row size */
int	ft_num_row(char *f_name)
{
	int		file;
	int		row;
	char	temp;

	row = 0;
	file = ft_open_read(f_name);
	while (read(file, &temp, 1) != 0)
	{
		if (temp == '\n')
			row++;
	}
	close(file);
	return (row);
}

/* column size */
int	ft_num_col(char *f_name)
{
	int		file;
	int		col;
	int		cnt;
	char	temp;

	cnt = 0;
	col = 0;
	file = ft_open_read(f_name);
	while (read(file, &temp, 1) != 0)
	{
		if (temp == '\n')
			break ;
		col++;
	}
	close(file);
	return (col);
}

/* check map is rectangular */
int	ft_check_rec(int size, int map_row, int map_col)
{
	int	cal_size;

	cal_size = map_col * map_row + map_row;
	if (cal_size == size)
		return (1);
	else
		return (0);
}
