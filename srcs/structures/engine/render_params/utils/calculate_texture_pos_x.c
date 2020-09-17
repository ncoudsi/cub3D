/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_pos_x.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:26:22 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 15:26:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	calculate_texture_pos_x()
{
	int	result;
	int	texture_width;

	texture_width = g_engine->map_params->no_texture->dimension->x;
	result = (int)(wall_hitpoint_x() * (float)texture_width);
	if (side() == 0 || side() == 2)
		result = texture_width - result - 1;
	else if (side() == 1 || side() == 3)
		result = texture_width - result - 1;
	return (result);
}
