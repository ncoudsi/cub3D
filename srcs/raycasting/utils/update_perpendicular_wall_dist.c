/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_perpendicular_wall_dist.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:04:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/24 11:21:43 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	update_perpendicular_wall_dist()
{
	if (is_map_border() == true)
		set_perpendicular_wall_dist(10000000.0f);
	else if (side() == 0 || side() == 2)
		set_perpendicular_wall_dist((map_pos_x() - pos_x() + (1.0f - step_x()) / 2.0f) / ray_dir_x());
	else if (side() == 1 || side() == 3)
		set_perpendicular_wall_dist((map_pos_y() - pos_y() + (1.0f - step_y()) / 2.0f) / ray_dir_y());
	if (perpendicular_wall_dist() <= 0.1f)
		set_perpendicular_wall_dist(0.15f);
}
