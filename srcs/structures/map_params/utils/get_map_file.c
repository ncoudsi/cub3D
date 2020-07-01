#include "cube.h"

char    **get_map_file(int fd)
{
    char    **result;
    char    *line;

    result = NULL;
    line = NULL;
    while (get_next_line(fd, &line) > 0)
        ft_add_to_tab((void *)line, (void ***)&result);
    free(line);
    return(result);
}