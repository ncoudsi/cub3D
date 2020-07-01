#include "cube.h"

t_map_params    *malloc_map_params()
{
    t_map_params    *result;

    result = (t_map_params *)malloc(sizeof(t_map_params));
    if (result == NULL)
        return (NULL);
    *result = create_map_params();
    return (result);
}