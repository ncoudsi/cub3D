#include "cube.h"

static t_bool   is_map_line(char *line)
{
    int index;

    index = 0;
    while (line[index] != '\0')
    {
        if (is_valid_map_entry(line[index]) == false)
            return(false);
        index++;
    }
    return (true);
}

static t_bool   is_all_map_params(t_map_params *to_fill)
{
    if (to_fill->resolution == NULL)
        return (false);
    else if (to_fill->no_textures == NULL)
        return (false);
    else if (to_fill->so_textures == NULL)
        return (false);
    else if (to_fill->we_textures == NULL)
        return (false);
    else if (to_fill->ea_textures == NULL)
        return (false);
    else if (to_fill->sprite_textures == NULL)
        return (false);
    else if (to_fill->ceiling_colors == NULL)
        return (false);
    else if (to_fill->floor_colors == NULL)
        return (false);               
    else if (to_fill->map == NULL)
        return (false);                         
    return (true);
}

void            fill_map_params(int fd, t_map_params *to_fill)
{
    int     index;
    char    **map_file;

    index = 0;
    map_file = get_map_file(fd);
    cube_file_parsing(map_file);
    while (map_file[index] != NULL)
    {   
        if (map_file[index][0] != '\0')
        {
            if (is_map_line(map_file[index]) == false)
                fill_params(map_file[index], to_fill);
            else
                fill_map(map_file[index], to_fill);
        }
        
        index++;
    }
    ft_free_tab((void **)map_file);
    if (is_all_map_params(to_fill) == false)
        error_exit(MISS_PARAM_ERROR);
    (void)to_fill;
}