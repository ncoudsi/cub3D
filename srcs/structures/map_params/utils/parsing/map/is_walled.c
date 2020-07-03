#include "cube.h"

static t_bool   is_up_walled(char ** map, t_vector index)
{
    while (index.y >= 0)
    {
        if (is_tile(map[index.y][index.x]) == false)
        {
            if (map[index.y][index.x] == '1')
                return (true);
            else
                return (false);
        }
        index.y--;
    }
    return (false);
}

static t_bool   is_down_walled(char ** map, t_vector index)
{
    while (index.y < ft_tab_len((void **)map))
    {
        if (is_tile(map[index.y][index.x]) == false)
        {
            if (map[index.y][index.x] == '1')
                return (true);
            else
                return (false);
        }
        index.y++;
    }
    return (false);
}

static t_bool   is_right_walled(char **map, t_vector index)
{
    while (index.x < (int)(ft_strlen(map[index.y])))
    {
        if (is_tile(map[index.y][index.x]) == false)
        {
            if (map[index.y][index.x] == '1')
                return (true);
            else
                return (false);
        }
        index.x++;
    }
    return (false);
}

static t_bool   is_left_walled(char **map, t_vector index)
{
    while (index.x >= 0)
    {
        if (is_tile(map[index.y][index.x]) == false)
        {
            if (map[index.y][index.x] == '1')
                return (true);
            else
                return (false);
        }
        index.x--;
    }
    return (false);
}

t_bool          is_walled(char **map, t_vector index)
{
    if (is_valid_line_len(map, index.y) == false)
        return (false);
    else if (is_up_walled(map, index) == false)
        return (false);
    else if (is_down_walled(map, index) == false)
        return (false);
    else if (is_left_walled(map, index) == false)
        return (false);
    else if (is_right_walled(map, index) == false)
        return (false);
    return (true);
}