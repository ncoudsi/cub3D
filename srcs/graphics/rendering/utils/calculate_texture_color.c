/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_color.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:28:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 14:10:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void calculate_texture_step(t_int_vector *camera_index)
{
	if (side_tab_index(camera_index->x) == 0)
		set_texture_step(1.0f * g_engine->map_params->we_texture->dimension->y / (float)wall_height());
	else if (side_tab_index(camera_index->x) == 1)
		set_texture_step(1.0f * g_engine->map_params->no_texture->dimension->y / (float)wall_height());
	else if (side_tab_index(camera_index->x) == 2)
		set_texture_step(1.0f * g_engine->map_params->ea_texture->dimension->y / (float)wall_height());
	else if (side_tab_index(camera_index->x) == 3)
		set_texture_step(1.0f * g_engine->map_params->so_texture->dimension->y / (float)wall_height());

}

t_color	calculate_texture_color(t_int_vector *camera_index)
{
	t_color	result;
	float	float_text_y;

	calculate_texture_step(camera_index);
	float_text_y = (wall_top() - resolution_y() / 2 + wall_height() / 2) * texture_step();
	float_text_y += ((camera_index->y - wall_top()) * texture_step());
	set_texture_pos_y((int)float_text_y);
	set_texture_pos_x(texture_pos_x_tab_index(camera_index->x));
	if (side_tab_index(camera_index->x) == 0)
		result = we_texture_color();
	else if (side_tab_index(camera_index->x) == 1)
		result = no_texture_color();
	else if (side_tab_index(camera_index->x) == 2)
		result = ea_texture_color();
	else
		result = so_texture_color();
	return (result);
}
