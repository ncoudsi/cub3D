#include "cube.h"

t_bool   is_valid_map_entry(char c)
{
    if (c != '0' && c != '1' && c != '2' && c != ' ' && is_cardinal_point(c) == false)
        return (false);
    return (true);
}