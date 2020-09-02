/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_pos_to_pixel_pos.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:55:03 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/02 16:08:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector	map_pos_to_pixel_pos(t_vector map_pos)
{
	t_vector	result;
	t_vector	map_size;
	t_vector	tile_size;

	map_size = get_minimap_tiles_nbr();
	tile_size = get_tile_size(map_size);
	result.x = (resolution_x() / (map_size.x / map_pos.x)) + (tile_size.x / 2);
	result.y = (resolution_y() / (map_size.y / map_pos.y)) + (tile_size.y / 2);
	return (result);
}
