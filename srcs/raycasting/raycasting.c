/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:56:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 10:02:13 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	raycasting(void)
{
	int				camera_index;
	t_int_vector	map_pos_value;

	camera_index = 0;
	while (camera_index < resolution_x())
	{
		map_pos_value = create_int_vector(pos_x(), pos_y());
		set_map_pos(&map_pos_value);
		set_camera_x(2.0f * (float)camera_index / resolution_x() - 1.0f);
		update_ray_dir_value();
		update_delta_dist_value();
		update_step_and_side_dist_values();
		hitpoint_detection();
		side_detection();
		set_side_tab(camera_index, side());
		update_perpendicular_wall_dist();
		set_perp_wall_dist_tab(camera_index, perpendicular_wall_dist());
		set_wall_hitpoint_x(calculate_wall_hitpoint_x());
		set_texture_pos_x(calculate_texture_pos_x());
		set_texture_pos_x_tab(camera_index, texture_pos_x());
		camera_index++;
	}
}
