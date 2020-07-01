#ifndef CUBE_MAP_PARAMS_H
# define CUBE_MAP_PARAMS_H

typedef struct  s_map_params
{
    char    **resolution;
    char    **no_textures;
    char    **so_textures;
    char    **we_textures;
    char    **ea_textures;
    char    **sprite_textures;
    char    **ceiling_colors;
    char    **floor_colors;
    char    **map;
}               t_map_params;

void            fill_map_params(int fd, t_map_params *to_fill);

/*
**  CREATORS & DESTRUCTORS
*/

t_map_params    create_map_params();
t_map_params    *malloc_map_params();
void            destroy_map_params(t_map_params to_destroy);
void            free_map_params(t_map_params *to_free);

/*
**  UTILS
*/

char            **get_map_file(int fd);
void            textures_parsing(char   **textures_parsing);
void            map_file_parsing(char **map_file);
void            resolution_parsing(char **resolution_line);
void            colors_parsing(char **colors_line);
void            map_line_parsing(char **map_line);
t_bool          is_cardinal_point(char c);

#endif