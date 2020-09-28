/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_map_params.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/28 12:18:35 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_MAP_PARAMS_H
# define CUBE_MAP_PARAMS_H

typedef struct	s_map_params
{
	t_int_vector	*resolution;
	t_texture		*no_texture;
	t_texture		*so_texture;
	t_texture		*we_texture;
	t_texture		*ea_texture;
	t_texture		*sprite_texture;
	t_color			*ceiling_color;
	t_color			*floor_color;
	char			**map;
	t_int_vector	*map_size;
	char			cardinal_point;
}				t_map_params;

void				load_map_params(int fd);
void				load_textures();
void				load_no_texture();
void				load_so_texture();
void				load_ea_texture();
void				load_we_texture();
void				load_sprite_texture();
void				resize_map();

/*
**  CREATORS & DESTRUCTORS
*/

t_map_params		create_map_params();
t_map_params		*malloc_map_params();
void				destroy_map_params(t_map_params to_destroy);
void				free_map_params(t_map_params *to_free);

/*
**	GETTERS & SETTERS
*/

t_int_vector const	*resolution();
int					resolution_x();
int					resolution_y();
void				set_resolution(t_int_vector *value);
t_texture const		*no_texture();
void				set_no_texture(t_texture *value);
t_texture const		*so_texture();
void				set_so_texture(t_texture *value);
t_texture const		*we_texture();
void				set_we_texture(t_texture *value);
t_texture const		*ea_texture();
void				set_ea_texture(t_texture *value);
t_texture const		*sprite_texture();
void				set_sprite_texture(t_texture *value);
t_color const		*ceiling_color();
void				set_ceiling_color(t_color *value);
t_color const		*floor_color();
void				set_floor_color(t_color *value);
char const			**map();
void				set_map(char **value);
t_int_vector const	*map_size();
int					map_size_x();
int					map_size_y();
void				set_map_size(t_int_vector *value);
char				***map_adr();
char				cardinal_point();
void				set_cardinal_point(char value);

/*
**  UTILS
*/

char				**get_map_file(int fd);
void				fill_params(char *param_line);
void				fill_map(char *map_line);
void				resize_resolution();

/*
**  PARSING
*/

void				textures_parsing(char   **textures_parsing);
void				cube_file_parsing(char **map_file);
void				resolution_parsing(char **resolution_line);
void				colors_parsing(char **colors_line);
void				map_parsing(char **map_file, int *index);
t_bool				is_cardinal_point(char c);
t_bool				is_valid_map_entry(char c);
t_bool				is_walled(char **map, t_int_vector index);
t_bool				is_tile(char c);
t_bool				is_valid_line_len(char **map, int index);
t_bool				is_only_digits(char *str);
t_bool				is_xpm_file(char *file_path);

#endif
