/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_minimap_player.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:47:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 09:20:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Rendering the player on the minimap. Represented as a circle whose center is
**	on player's position.
*/

void	render_minimap_player(void)
{
	t_vector	center;

	center = map_pos_to_pixel_pos(create_vector(pos_x(), pos_y()));
	if (center.x + PLAYER_SIZE > resolution_x())
		center.x = resolution_x() - PLAYER_SIZE;
	else if (center.x - PLAYER_SIZE < 0)
		center.x = PLAYER_SIZE;
	if (center.y + PLAYER_SIZE > resolution_y())
		center.y = resolution_y() - PLAYER_SIZE;
	else if (center.y - PLAYER_SIZE < 0)
		center.y = PLAYER_SIZE;
	draw_circle(center, PLAYER_SIZE, create_color(47, 216, 60));
}
