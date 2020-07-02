#include "cube.h"

void    resolution_parsing(char **resolution_line)
{
    if (ft_tab_len((void **)resolution_line) != 3)
        error_exit(RES_ERROR);
    else if (ft_strlen(resolution_line[0]) != 1)
        error_exit(RES_ERROR);
    else if (is_only_digits(resolution_line[1]) == false || is_only_digits(resolution_line[2]) == false)
        error_exit(RES_ERROR);
}