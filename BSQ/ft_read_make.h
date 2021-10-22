#ifndef FT_READ_MAKE_H
# define FT_READ_MAKE_H

# include <stdlib.h>
# include "ft_read.h"

int	ft_min_three(int a, int b, int c);
int	**ft_make_empty_box(int map_row, int map_col);
int	**ft_make_real_box(char *f_name, int **box, int map_row, int map_col);
int	**ft_make_len_map(int **map, int map_row, int map_col);
int	ft_find_max_len(int **map, int map_row, int map_col);

#endif
