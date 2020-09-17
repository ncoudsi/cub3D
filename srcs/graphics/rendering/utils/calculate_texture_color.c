/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_color.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:28:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 14:17:34 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	calculate_texture_color(t_int_vector *camera_index)
{
	t_color	result;
	float	float_text_y;

	float_text_y = ((camera_index->y - wall_top()) * texture_step());
	set_texture_pos_y((int)(float_text_y));
	set_texture_pos_x(round(texture_pos_x_tab_index(camera_index->x)));
	result.r = g_engine->map_params->no_texture->texels[texture_pos_x() + texture_pos_y() * g_engine->map_params->no_texture->text_size_line + RED_INDEX];
	result.g = g_engine->map_params->no_texture->texels[texture_pos_x() + texture_pos_y() * g_engine->map_params->no_texture->text_size_line + GREEN_INDEX];
	result.b = g_engine->map_params->no_texture->texels[texture_pos_x() + texture_pos_y() * g_engine->map_params->no_texture->text_size_line + BLUE_INDEX];
	// printf("R>%i\nG>%i\nB>%i\n", result.r, result.g, result.b);
	return (result);
}
