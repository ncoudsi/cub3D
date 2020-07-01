#include "cube.h"

int main()
{
    int fd;
    t_map_params    *map_params;

    fd = open("./ressources/map.cub", O_RDONLY);
    if (fd == -1)
        return (1);
    map_params = malloc_map_params();
    fill_map_params(fd, map_params);
    free_map_params(map_params);
    return(0);
}