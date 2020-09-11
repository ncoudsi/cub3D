/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_wall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:56:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/11 10:14:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_wall()
{
	int	camera_index;
	int	height_index;
	int	wall_height;
	int	wall_bottom;
	int	wall_top;

	camera_index = 0;
	while (camera_index < resolution_x())
	{
		wall_height = (int)(resolution_y() / perp_wall_dist_tab_index(camera_index));
		wall_bottom = wall_height / 2 + resolution_y() / 2;
		if (wall_bottom > resolution_y())
			wall_bottom = resolution_y();
		wall_top = -wall_height / 2 + resolution_y() / 2;
		if (wall_top < 0)
			wall_top = 0;
		height_index = wall_top;
		while (height_index < wall_bottom)
		{
			put_pixel(create_vector(camera_index, height_index), create_color(180, 180, 180));
			height_index++;
		}
		camera_index++;
	}
}
