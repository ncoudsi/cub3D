#include "cube.h"

static t_bool   is_valid_map(char **map)
{
    t_vector    index;

    index = create_vector(0, 0);
    while (map[index.y] != NULL)
    {
        index.x = 0;
        while (map[index.y][index.x] != '\0')
        {
            if (is_valid_map_entry(map[index.y][index.x] == false))
                return (false);
            else if (is_tile(map[index.y][index.x]) == true && is_walled(map, index) == false)
                return (false);
            index.x++;
        }
        index.y++;
    }
    return (true);
}

void            map_parsing(char **map_file, int *index)
{
    char    **map;

    while (map_file[*index] != NULL)
    {
        ft_add_to_tab((void *)(map_file[*index]), (void ***)(&map));
        (*index)++;
    }
    if (is_valid_map(map) == false)
        error_exit(MAP_ERROR);
    (*index)--;
}