/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:56:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 16:07:05 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    raycasting()
{
    int         index;
    t_vector    *ray_direction;
	t_vector	*delta_dist_value;

    index = 0;
    ray_direction = ray_dir();
	delta_dist_value = delta_dist();
    while (index < resolution_x())
    {
        set_camera_x(2 * index / resolution_x() - 1);
        ray_direction->x = dir_x() + plane_x() * camera_x();
        ray_direction->y = dir_y() + plane_y() * camera_x();
		delta_dist_value->x = sqrt(1 + (ray_dir_y() * ray_dir_y()) / (ray_dir_x() * ray_dir_x()));
		delta_dist_value->y = sqrt(1 + (ray_dir_x() * ray_dir_x()) / (ray_dir_y() * ray_dir_y()));
		if (ray_dir_x() < 0)
		{
			set_step_x(-1);
			set_side_dist_x((pos_x() - map_pos_x()) * delta_dist_x());
		}
		else
		{
			set_step_x(1);
			set_side_dist_x((map_pos_x() + 1.0 - pos_x()) * delta_dist_x());
		}
		if (ray_dir_y() < 0)
		{
			set_step_y(-1);
			set_side_dist_y((pos_y() - map_pos_y()) * delta_dist_y());
		}
		else
		{
			set_step_y(1);
			set_side_dist_y((map_pos_y() + 1.0 - pos_y()) * delta_dist_y());
		}
		index++;
    }
}
