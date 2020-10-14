/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_delta_dist_value.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:22:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 08:54:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Updating delta distance of the ray. The delta distance is the distance in
**	x or y, the ray has to travel to go to the next map square.
*/

void	update_delta_dist_value(void)
{
	t_vector	delta_dist_value;

	delta_dist_value.x = sqrt(1 + (ray_dir_y() * ray_dir_y()) /
	(ray_dir_x() * ray_dir_x()));
	delta_dist_value.y = sqrt(1 + (ray_dir_x() * ray_dir_x()) /
	(ray_dir_y() * ray_dir_y()));
	set_delta_dist(&delta_dist_value);
}
