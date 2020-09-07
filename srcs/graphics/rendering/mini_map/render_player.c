/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:19:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 12:06:36 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_player()
{
	t_vector	center;

	center = map_pos_to_pixel_pos(create_vector(player_pos_x(), player_pos_y()));
	draw_circle(center, PLAYER_SIZE, create_color(PLAYER_COLOR));
}
