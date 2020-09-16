/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_pos_x.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:26:22 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 09:38:33 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	calculate_texture_pos_x()
{
	int	result;
	int	texture_width;

	texture_width = g_engine->map_params->no_texture->dimension->x;
	result = wall_hitpoint_x() * texture_width;
	if (side() == 0 && ray_dir_x() > 0)
		result = texture_width - texture_pos_x() - 1;
	else if (side() == 1 && ray_dir_y() < 0)
		result = texture_width - texture_pos_x() - 1;
	return (result);
}
