/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_minimap_tile.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:46:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 09:41:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Rendering the tiles of the minimap. Represented as rectangles of a
**	different color than walls.
*/

void	render_minimap_tile(t_int_vector map_index)
{
	t_vector	size;
	t_vector	pos;
	t_color		color;

	size = get_minimap_tile_size();
	pos = create_vector(map_index.x * size.x, map_index.y * size.y);
	color = create_color(53, 35, 30);
	draw_rectangle(pos, size, color);
}
