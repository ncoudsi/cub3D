#include "cube.h"

void    fill_params(char *param_line, t_map_params *to_fill)
{
    char    **splitted_line;

    splitted_line = ft_split(param_line, ' ');
    if (splitted_line[0][0] == 'R')
        to_fill->resolution = splitted_line;
    else if (splitted_line[0][0] == 'N')
        to_fill->no_textures = splitted_line;
    else if (splitted_line[0][0] == 'S')
    {
        if (ft_strlen(splitted_line[0]) == 1)
            to_fill->sprite_textures = splitted_line;
        else
            to_fill->so_textures = splitted_line;
    }
    else if (splitted_line[0][0] == 'W')
        to_fill->we_textures = splitted_line;
    else if (splitted_line[0][0] == 'E')
        to_fill->ea_textures = splitted_line;
    else if (splitted_line[0][0] == 'C')
        to_fill->ceiling_colors = splitted_line;
    else if (splitted_line[0][0] == 'F')
        to_fill->floor_colors = splitted_line;
}