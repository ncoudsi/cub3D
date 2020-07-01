#include "cube.h"

void    map_line_parsing(char **map_line)
{
    t_vector    index;

    index = create_vector(0, 0);
    while (map_line[index.y] != NULL)
    {
        index.x = 0;
        while (map_line[index.y][index.x] != '\0')
        {
            if (ft_is_digit(map_line[index.y][index.x]) == false &&
                is_cardinal_point(map_line[index.y][index.x]) == false)
                error_exit(MAP_ERROR);
            index.x++;
        }
        index.y++;
    }
}