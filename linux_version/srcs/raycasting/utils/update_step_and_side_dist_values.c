/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_step_and_side_dist_values.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:23:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 09:02:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Updating both step value and side distance. The step value, for both x
**	and y, is -1 or 1. If ray_direction_x has a negative value, step_x is -1.
**	If ray_direction_x has a positive value, step_x is 1. Same goes for step_y.
**	Side distance, both x and y, is the distance between the starting position
**	of the ray, and the next map square.
*/

void	update_step_and_side_dist_values(void)
{
	if (ray_dir_x() < 0)
	{
		set_step_x(-1);
		set_side_dist_x((pos_x() - (float)map_pos_x()) * delta_dist_x());
	}
	else
	{
		set_step_x(1);
		set_side_dist_x((float)(map_pos_x() + 1.0f - pos_x()) *
		delta_dist_x());
	}
	if (ray_dir_y() < 0)
	{
		set_step_y(-1);
		set_side_dist_y((pos_y() - (float)map_pos_y()) * delta_dist_y());
	}
	else
	{
		set_step_y(1);
		set_side_dist_y((float)(map_pos_y() + 1.0f - pos_y()) *
		delta_dist_y());
	}
}
