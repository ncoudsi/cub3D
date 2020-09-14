/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:38:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/11 14:40:21 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	render_ceiling(t_vector *camera_index, int wall_top)
{
	while (camera_index->y < wall_top)
	{
		put_pixel(*camera_index, create_color(70,100,225));
		camera_index->y++;
	}
}

static void	render_wall(t_vector *camera_index, int wall_bottom)
{
	while (camera_index->y < wall_bottom)
	{
		put_pixel(*camera_index, create_color(180, 180, 180));
		camera_index->y++;
	}
}

static void	render_floor(t_vector *camera_index)
{
	while (camera_index->y < resolution_y())
	{
		put_pixel(*camera_index, create_color(200, 150, 20));
		camera_index->y++;
	}
}

void	rendering()
{
	t_vector	camera_index;
	int			wall_height;
	int			wall_bottom;
	int			wall_top;

	camera_index = create_vector(0, 0);
	while (camera_index.x < resolution_x())
	{
		camera_index.y = 0;
		wall_height = (int)(resolution_y() / perp_wall_dist_tab_index(camera_index.x));
		wall_bottom = wall_height / 2 + resolution_y() / 2;
		if (wall_bottom > resolution_y())
			wall_bottom = resolution_y();
		wall_top = -wall_height / 2 + resolution_y() / 2;
		if (wall_top < 0)
			wall_top = 0;
		render_ceiling(&camera_index, wall_top);
		render_wall(&camera_index, wall_bottom);
		render_floor(&camera_index);
		camera_index.x++;
	}
	render_minimap();
	mlx_put_image_to_window(mlx_ptr(), win_ptr(), img_ptr(), 0, 0);
}