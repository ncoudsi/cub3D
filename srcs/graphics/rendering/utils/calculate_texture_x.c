/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_x.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:26:22 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/15 14:26:44 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	calculate_texture_x()
{
	int	texture_width;

	texture_width = g_engine->map_params->no_texture->dimension->x;
	set_texture_x(wall_hitpoint_x() * texture_width);
	if (side() == 0 && ray_dir_x() > 0)
		set_texture_x(texture_width - texture_x() - 1);
	else if (side() == 1 && ray_dir_y() < 0)
		set_texture_x(texture_width - texture_x() - 1);
}
