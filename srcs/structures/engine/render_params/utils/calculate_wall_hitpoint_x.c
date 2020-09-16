/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_wall_hitpoint_x.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:26:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 15:04:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	calculate_wall_hitpoint_x()
{
	float	result;

		if (side() == 0)
			result = pos_y() + perpendicular_wall_dist() * ray_dir_y();
		else
			result = pos_x() + perpendicular_wall_dist() * ray_dir_x();
	result = result - floor(result);
	return(result);
}
