#include "cube.h"

void    fill_map_params(int fd, t_map_params *to_fill)
{
    char    **map_file;
    // int     index;

    map_file = get_map_file(fd);
    // index = 0;
    cube_file_parsing(map_file);
    // while (map_file[index] != NULL)
    // {
    //     if (ft_is_digit(map_file[index][0]) == false)
    //         fill_params(map_file[index], to_fill);
    //     else
    //         fill_map(map_file[index], to_fill);
    //     index++;
    // }
    ft_free_tab((void **)map_file);
    (void)to_fill;
}