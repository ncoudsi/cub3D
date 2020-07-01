#include "cube.h"

void    free_map_params(t_map_params *to_free)
{
    destroy_map_params(*to_free);
    free(to_free);
}