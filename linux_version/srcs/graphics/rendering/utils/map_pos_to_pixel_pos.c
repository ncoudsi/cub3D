/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_pos_to_pixel_pos.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:55:03 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 09:32:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Translating positions on the 2 dimensions map to the screen in order to
**	render minimap components. Note that the last division (/ 5) is here to
**	scale the minimap size. The lower the value is, the bigger the size.
*/

t_vector	map_pos_to_pixel_pos(t_vector map_pos)
{
	t_vector	result;
	t_vector	tile_size;

	tile_size = get_minimap_tile_size();
	result.x = ((resolution_x() / (map_size_x() / map_pos.x))) / 5;
	result.y = (resolution_y() / (map_size_y() / map_pos.y)) / 5;
	return (result);
}
