/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_wall_hitpoint_x.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:26:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 09:18:54 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Calculating the precise point (expressed from 0 to 1 in floating point)
**	of the x axis of the wall the ray has hit. It is used later on to define
**	the pixel of the texture we have to draw.
*/

float	calculate_wall_hitpoint_x(void)
{
	float	result;

	result = 0;
	if (side() == 0 || side() == 2)
		result = pos_y() + perpendicular_wall_dist() * ray_dir_y();
	else if (side() == 1 || side() == 3)
		result = pos_x() + perpendicular_wall_dist() * ray_dir_x();
	result -= floor(result);
	return (result);
}
