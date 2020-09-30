/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_delta_dist_value.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:22:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 14:54:34 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	update_delta_dist_value(void)
{
	t_vector	delta_dist_value;

	delta_dist_value.x = sqrt(1 + (ray_dir_y() * ray_dir_y()) /
	(ray_dir_x() * ray_dir_x()));
	delta_dist_value.y = sqrt(1 + (ray_dir_x() * ray_dir_x()) /
	(ray_dir_y() * ray_dir_y()));
	set_delta_dist(&delta_dist_value);
}
