/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_wall_hitpoint_x.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:26:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/15 14:55:23 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	calculate_wall_hitpoint_x()
{
		if (side() == 0)
			set_wall_hitpoint_x(pos_y() + perpendicular_wall_dist() * ray_dir_y());
		else
			set_wall_hitpoint_x(pos_x() + perpendicular_wall_dist() * ray_dir_x());
	set_wall_hitpoint_x(wall_hitpoint_x() - floor(wall_hitpoint_x()));
}
