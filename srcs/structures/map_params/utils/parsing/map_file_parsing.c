#include "cube.h"

void    map_file_parsing(char **map_file)
{
    int     index;
    char    **splitted_line;

    index = 0;
    while (map_file[index] != NULL)
    {
        splitted_line = ft_split(map_file[index], ' ');
        if (splitted_line[0] != NULL)
        {
            if (splitted_line[0][0] == 'R')
                resolution_parsing(splitted_line);
            else if (splitted_line[0][0] == 'N' || splitted_line[0][0] == 'S' ||
                    splitted_line[0][0] == 'W' || splitted_line[0][0] == 'E' )
                textures_parsing(splitted_line);
            else if (splitted_line[0][0] == 'C' || splitted_line[0][0] == 'F' )
                colors_parsing(splitted_line);
            else if (splitted_line[0][0] == '1')
                map_line_parsing(splitted_line);
            else
                error_exit(MAP_ENTRY);
        }
        ft_free_tab((void **)splitted_line);
        index++;
    }
}