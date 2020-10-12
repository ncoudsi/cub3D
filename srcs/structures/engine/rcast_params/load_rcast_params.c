/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_rcast_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 12:00:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:43:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	attributes_allocation(void)
{
	g_engine->rcast_params->dir = (t_vector *)malloc(sizeof(t_vector));
	g_engine->rcast_params->plane = (t_vector *)malloc(sizeof(t_vector));
	g_engine->rcast_params->ray_dir = (t_vector *)malloc(sizeof(t_vector));
	g_engine->rcast_params->map_pos =
	(t_int_vector *)malloc(sizeof(t_int_vector));
	g_engine->rcast_params->step =
	(t_int_vector *)malloc(sizeof(t_int_vector));
	g_engine->rcast_params->side_dist = (t_vector *)malloc(sizeof(t_vector));
	g_engine->rcast_params->delta_dist = (t_vector *)malloc(sizeof(t_vector));
	g_engine->rcast_params->perp_wall_dist_tab =
	(float *)malloc(sizeof(float) * resolution_x());
	g_engine->rcast_params->side_tab =
	(int *)malloc(sizeof(int) * resolution_x());
}

static void	fill_perp_wall_dist_tab(float value)
{
	int	index;

	index = 0;
	while (index < resolution_x())
	{
		g_engine->rcast_params->perp_wall_dist_tab[index] = value;
		index++;
	}
}

void		load_rcast_params(void)
{
	t_vector		dir_value;
	t_vector		plane_value;
	t_vector		null_values;
	t_int_vector	map_pos_value;

	attributes_allocation();
	dir_value = get_dir_value();
	plane_value = get_plane_value();
	map_pos_value = create_int_vector((int)pos_x(), (int)pos_y());
	null_values = create_vector(0, 0);
	set_dir(&dir_value);
	set_plane(&plane_value);
	set_ray_dir(&null_values);
	set_rcast_time(0);
	set_old_time(0);
	set_camera_x(0);
	set_map_pos(&map_pos_value);
	set_step((t_int_vector *)&null_values);
	set_side_dist(&null_values);
	set_delta_dist(&null_values);
	set_perpendicular_wall_dist(0);
	fill_perp_wall_dist_tab(0);
	set_hit(0);
	set_side(0);
}
