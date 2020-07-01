#include "cube.h"

void    fill_map_params(int fd, t_map_params *to_fill)
{
    char    **map_file;

    map_file = get_map_file(fd);
    map_file_parsing(map_file);
    ft_free_tab((void **)map_file);
    (void)to_fill;
}