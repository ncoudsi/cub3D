/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:22:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 09:39:31 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_H
# define CUBE_H

# include "cube_includes.h"

int			cube_file_fd();
void		run_game();
int			update_game();

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
int			get_pixel_index(t_vector pos);
void		put_pixel(t_vector pos, t_color color);
void		draw_rectangle(t_vector pos, t_vector dimension, t_color color);
void		draw_circle(t_vector center, int radius, t_color color);
t_vector	get_minimap_tiles_nbr();
t_vector	get_minimap_tile_size(t_vector minimap_size);
t_vector	map_pos_to_pixel_pos(t_vector map_pos);
void		render_minimap();
void		render_minimap_wall(t_vector map_index);
void		render_minimap_tile(t_vector map_index);
void		render_minimap_player();

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
#endif
