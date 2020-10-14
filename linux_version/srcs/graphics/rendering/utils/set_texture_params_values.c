/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_texture_params_values.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:05:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:57:19 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_texture_params_values(int camera_x)
{
	set_wall_height((int)(resolution_y() / perp_wall_dist_tab_index(camera_x)));
	set_wall_bottom(wall_height() / 2 + resolution_y() / 2);
	if (wall_bottom() > resolution_y())
		set_wall_bottom(resolution_y());
	set_wall_top(-wall_height() / 2 + resolution_y() / 2);
	if (wall_top() < 0)
		set_wall_top(0);
}
