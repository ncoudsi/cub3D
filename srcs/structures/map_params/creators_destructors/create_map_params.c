#include "cube.h"

t_map_params    create_map_params()
{
    t_map_params    result;

    result.resolution = (char **)ft_tab_new(3);
    result.no_textures = (char **)ft_tab_new(2);
    result.so_textures = (char **)ft_tab_new(2);
    result.we_textures = (char **)ft_tab_new(2);
    result.ea_textures = (char **)ft_tab_new(2);
    result.sprite_textures = (char **)ft_tab_new(2);
    result.ceiling_colors = (char **)ft_tab_new(2);
    result.floor_colors = (char **)ft_tab_new(2);
    result.map = NULL;
    return (result);
}