/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_wall_hitpoint_x.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:26:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/18 10:21:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	calculate_wall_hitpoint_x()
{
	float	result;

	result = 0;
		if (side() == 0 || side() == 2)
			result = pos_y() + perpendicular_wall_dist() * ray_dir_y();
		else if (side() == 1 || side() == 3)
			result = pos_x() + perpendicular_wall_dist() * ray_dir_x();
	result -= floor(result);
	return(result);
}
