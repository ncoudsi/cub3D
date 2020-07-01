#include "cube.h"

t_bool  is_cardinal_point(char c)
{
    if (c == 'N' || c == 'S' || c == 'E' || c == 'W')
        return (true);
    return (false);
}