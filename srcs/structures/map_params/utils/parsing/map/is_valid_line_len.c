#include "cube.h"

t_bool  is_valid_line_len(char **map, int index)
{
    size_t  line_len;
    size_t  next_line_len;

    if (map[index + 1] == NULL)
        return (true);
    line_len = ft_strlen(map[index]);
    next_line_len = ft_strlen(map[index + 1]);
    if (line_len > next_line_len)
    {
        while (next_line_len < line_len)
        {
            if (map[index][next_line_len] != '1' && map[index][next_line_len] != ' ')
                return (false);
            next_line_len++;
        }

    }
    else if (line_len < next_line_len)
    {
        while (next_line_len > line_len)
        {
            next_line_len--;
            if (map[index + 1][next_line_len] != '1' && map[index + 1][next_line_len] != ' ')
                return (false);
        }
    }
    return (true);
}