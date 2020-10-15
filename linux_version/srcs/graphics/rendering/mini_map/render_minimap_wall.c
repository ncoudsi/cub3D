/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_minimap_wall.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:47:04 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 09:35:56 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Rendering the walls of the minimap. Represented as rectangles of a
**	different color than tiles.
*/

void	render_minimap_wall(t_int_vector map_index)
{
	t_vector	size;
	t_vector	pos;
	t_color		color;

	size = get_minimap_tile_size();
	pos = create_vector(map_index.x * size.x, map_index.y * size.y);
	color = create_color(165, 47, 12);
	draw_rectangle(pos, size, color);
}
