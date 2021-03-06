/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hitpoint_detection.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 10:08:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 09:06:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Setting map_pos depending on where on the map the ray hits a wall.
**	To avoid SEGV cases, we consider the map borders as walls.
*/

void	hitpoint_detection(void)
{
	set_hit(false);
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
		if (is_map_border() == true)
			set_hit(true);
		else if (g_engine->map_params->map[map_pos_y()][map_pos_x()] == '1')
			set_hit(true);
	}
}
