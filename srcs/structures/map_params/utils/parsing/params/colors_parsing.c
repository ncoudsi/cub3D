#include "cube.h"

static t_bool   is_color_value(char *color_value)
{
    int index;
    int len;

    index = 0;
    len = ft_strlen(color_value);
    while (index < len)
    {
        if (ft_is_digit(color_value[index]) == false && color_value[index] != ',')
            return (false);
        index++;
    }
    return (true);
}

void    colors_parsing(char **colors_line)
{
    if (ft_tab_len((void **)colors_line) != 2)
        error_exit(COL_ERROR);
    else if (ft_strlen(colors_line[0]) > 1)
        error_exit(COL_ERROR);
    else if (ft_strlen(colors_line[1]) > 11 || ft_strlen(colors_line[1]) < 5)
        error_exit(COL_ERROR);
    else if (is_color_value(colors_line[1]) == false)
        error_exit(COL_ERROR);
}