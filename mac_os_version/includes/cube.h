/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:22:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 09:38:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_H
# define CUBE_H

# include "cube_includes.h"

int			cube_file_fd(char *cub_file);
void		run_game();
int			update_game();
int			close_game();

/*
**  KEY_HANDLING
*/

int			key_press(int key);
int			key_release(int key);
t_bool		is_movement_key(int key);
t_bool		is_rotation_key(int key);

/*
**	RENDERING
*/

void		rendering();
int			get_pixel_index(t_int_vector pos);
void		put_pixel(t_int_vector pos, t_color color);
void		draw_rectangle(t_vector pos, t_vector dimension, t_color color);
void		draw_circle(t_vector center, int radius, t_color color);
t_vector	get_minimap_tile_size();
t_vector	map_pos_to_pixel_pos(t_vector map_pos);
void		render_minimap();
void		render_minimap_wall(t_int_vector map_index);
void		render_minimap_tile(t_int_vector map_index);
void		render_minimap_player();
void		no_texture_color(t_int_vector *camera_index);
void		so_texture_color(t_int_vector *camera_index);
void		we_texture_color(t_int_vector *camera_index);
void		ea_texture_color(t_int_vector *camera_index);
t_color		spirte_texture_color();
void		calculate_texture_step(t_int_vector *camera_index);
void		set_texture_params_values(int camera_x);
void		set_sprite_params_values(int sprite_index);
void		render_sprite_pixel(t_int_vector sprite_pixel_index);
void		calculate_sprite_texture_pos_x(t_int_vector sprite_pixel_index);
void		calculate_sprite_texture_pos_y(t_int_vector sprite_pixel_index);
t_bool		is_drawable_sprite_pixel(t_int_vector sprite_pixel_index);
void		render_sprite(void);

/*
**	MATHS
*/

float		distance_calculation(t_vector starting_point, t_vector end_point);

/*
**  RAYCASTING
*/

void		raycasting();
void		update_ray_dir_value();
void		update_delta_dist_value();
void		update_step_and_side_dist_values();
void		hitpoint_detection();
void		side_detection();
t_bool		is_map_border();
void		update_perpendicular_wall_dist();

/*
**	BMP
*/

void		create_bmp(void);
void		pre_render_bmp(void);
void		set_int_in_bmp_buffer(unsigned char *bmp_buffer, int file_size);
void		bmp_rendering(void);

#endif
