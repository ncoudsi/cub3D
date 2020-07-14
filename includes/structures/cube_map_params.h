/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_map_params.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/14 12:50:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_MAP_PARAMS_H
# define CUBE_MAP_PARAMS_H

typedef struct  s_map_params
{
    t_vector    *resolution;
    char        *no_textures;
    char        *so_textures;
    char        *we_textures;
    char        *ea_textures;
    char        *sprite_textures;
    t_color     *ceiling_colors;
    t_color     *floor_colors;
    char        **map;
}               t_map_params;

/*
**  CREATORS & DESTRUCTORS
*/

t_map_params    create_map_params();
t_map_params    *malloc_map_params();
void            destroy_map_params(t_map_params to_destroy);
void            free_map_params(t_map_params *to_free);

/*
**	GETTERS & SETTERS
*/

t_vector		*resolution();
int				resolution_x();
int				resolution_y();
void			set_resolution(t_vector *value);
char			*no_textures();
void			set_no_textures(char *value);
char			*so_textures();
void			set_so_textures(char *value);
char			*we_textures();
void			set_we_textures(char *value);
char			*ea_textures();
void			set_ea_textures(char *value);
char			*sprite_textures();
void			set_sprite_textures(char *value);
t_color			*ceiling_colors();
void			set_ceiling_color(t_color *value);
t_color			*floor_colors();
void			set_floor_color(t_color *value);
char			**map();

/*
**  UTILS
*/

char            **get_map_file(int fd);
void            fill_params(char *param_line);
void            fill_map(char *map_line);

/*
**  PARSING
*/

void            textures_parsing(char   **textures_parsing);
void            cube_file_parsing(char **map_file);
void            resolution_parsing(char **resolution_line);
void            colors_parsing(char **colors_line);
void            map_parsing(char **map_file, int *index);
t_bool          is_cardinal_point(char c);
t_bool          is_valid_map_entry(char c);
t_bool          is_walled(char **map, t_vector index);
t_bool          is_tile(char c);
t_bool          is_valid_line_len(char **map, int index);
t_bool          is_only_digits(char *str);
t_bool          is_xpm_file(char *file_path);

#endif
