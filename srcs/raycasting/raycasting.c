/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:56:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 16:21:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    raycasting()
{
	int	index;

	index = 0;
	while (index < resolution_x())
	{
		set_camera_x(2 * index / resolution_x() - 1);
		update_ray_dir_value();
		update_delta_dist_value();
		update_step_and_side_dist_values();
		set_hit(false);
		set_map_pos_x(pos_x());
		set_map_pos_y(pos_y());
		while (hit() == false)
		{
			if (side_dist_x() < side_dist_y())
			{
				set_side_dist_x(side_dist_x() + delta_dist_x());
				set_map_pos_x(map_pos_x() + step_x());
				set_side(0);
			}
			else
			{
				set_side_dist_y(side_dist_y() + delta_dist_y());
				set_map_pos_y(map_pos_y() + step_y());
				set_side(1);
			}
			if (g_engine->map_params->map[map_pos_y()][map_pos_x()] == '1')
				set_hit(true);
		}
		if (side() == 0)
			set_pos_to_wall_dist((map_pos_x() - pos_x() + (1 - step_x()) / 2) / ray_dir_x());
		else
			set_pos_to_wall_dist((map_pos_y() - pos_y() + (1 - step_y()) / 2) / ray_dir_y());
		printf("DIST : %f\n", pos_to_wall_dist());
		index++;
	}
}
