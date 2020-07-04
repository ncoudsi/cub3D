#include "cube.h"

t_map_params    create_map_params()
{
    t_map_params    result;

    result.resolution = NULL;
    result.no_textures = NULL;
    result.so_textures = NULL;
    result.we_textures = NULL;
    result.ea_textures = NULL;
    result.sprite_textures = NULL;
    result.ceiling_colors = NULL;
    result.floor_colors = NULL;
    result.map = NULL;
    return (result);
}