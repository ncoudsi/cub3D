/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:38:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/23 12:34:59 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	render_ceiling(t_int_vector *camera_index)
{
	while (camera_index->y < wall_top())
	{
		put_pixel(*camera_index, create_color(70,100,225));
		camera_index->y++;
	}
}

static void	render_wall(t_int_vector *camera_index)
{
	t_color	texture_color;

	while (camera_index->y < wall_bottom())
	{
		texture_color = calculate_texture_color(camera_index);
		put_pixel(*camera_index, texture_color);
		camera_index->y++;
	}
}

static void	render_floor(t_int_vector *camera_index)
{
	while (camera_index->y < resolution_y())
	{
		put_pixel(*camera_index, create_color(200, 150, 20));
		camera_index->y++;
	}
}

void	rendering()
{
	t_int_vector	camera_index;

	camera_index = create_int_vector(0, 0);
	while (camera_index.x < resolution_x())
	{
		camera_index.y = 0;
		set_wall_height((int)(resolution_y() / perp_wall_dist_tab_index(camera_index.x)));
		set_wall_bottom(wall_height() / 2 + resolution_y() / 2);
		if (wall_bottom() > resolution_y())
			set_wall_bottom(resolution_y());
		set_wall_top(-wall_height() / 2 + resolution_y() / 2);
		if (wall_top() < 0)
			set_wall_top(0);
		render_ceiling(&camera_index);
		render_wall(&camera_index);
		render_floor(&camera_index);
		camera_index.x++;
	}
	render_minimap();
	// render_sprites();
	mlx_put_image_to_window(mlx_ptr(), win_ptr(), img_ptr(), 0, 0);
}
