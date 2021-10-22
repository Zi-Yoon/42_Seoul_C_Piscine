#ifndef FT_READ_H
# define FT_READ_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

int	ft_open_read(char *f_name);
int	ft_file_size(char *f_name);
int	ft_num_row(char *f_name);
int	ft_num_col(char *f_name);
int	ft_check_rec(int size, int map_row, int map_col);

#endif
