#include "cube.h"

t_bool  is_tile(char c)
{
    if (c == '0' || c == '2' || is_cardinal_point(c) == true)
        return (true);
    return (false);
}