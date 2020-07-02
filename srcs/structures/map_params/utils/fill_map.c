#include "cube.h"

void    fill_map(char *map_line, t_map_params *to_fill)
{
    ft_add_to_tab((void *)map_line, (void ***)(&(to_fill->map)));
}