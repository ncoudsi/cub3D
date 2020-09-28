/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_step.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:50:33 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/28 14:50:57 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void calculate_texture_step(t_int_vector *camera_index)
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