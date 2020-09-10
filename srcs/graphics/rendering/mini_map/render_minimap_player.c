/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_minimap_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:19:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 13:15:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_minimap_player()
{
	t_vector	center;

	center = map_pos_to_pixel_pos(create_vector(pos_x(), pos_y()));
	draw_circle(center, PLAYER_SIZE, create_color(PLAYER_COLOR));
}
