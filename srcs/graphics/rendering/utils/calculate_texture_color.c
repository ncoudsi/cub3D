/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_color.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:28:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 16:33:21 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	calculate_texture_color(t_vector *camera_index)
{
	t_color	result;
	int		index;
	float	float_text_y;

	index = 0;
	float_text_y = (((int)camera_index->y - wall_top()) * texture_step());
	set_texture_pos_y((int)round(float_text_y));
	set_texture_pos_x(texture_pos_x_tab_index(camera_index->x));
	result.r = g_engine->map_params->no_texture->texels[texture_pos_x() + texture_pos_y() * g_engine->map_params->no_texture->size_line + RED_INDEX];
	result.g = g_engine->map_params->no_texture->texels[texture_pos_x() + texture_pos_y() * g_engine->map_params->no_texture->size_line + GREEN_INDEX];
	result.b = g_engine->map_params->no_texture->texels[texture_pos_x() + texture_pos_y() * g_engine->map_params->no_texture->size_line + BLUE_INDEX];
	return (result);
}
