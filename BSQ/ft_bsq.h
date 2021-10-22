#ifndef FT_BSQ_H
# define FT_BSQ_H

# include "ft_send_ans.h"

void	ft_putstr(char *str);
char	**ft_draw_map(int **map, int len, int map_row, int map_col);
char	**ft_make_bsq(char **ans_map, int len, int ans_x, int ans_y);
void	ft_print_bsq(char **ans_map, int map_row, int map_col);

#endif
