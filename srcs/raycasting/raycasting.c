/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:56:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/08 14:32:23 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    raycasting()
{
    int         index;

    index = 0;
    while (index < resolution_x())
    {
        set_camera_x(2 * index / resolution_x() - 1);
		get_ray_dir_value();
		get_delta_dist_value();
		get_step_and_side_dist_values();
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
		index++;
    }
}
