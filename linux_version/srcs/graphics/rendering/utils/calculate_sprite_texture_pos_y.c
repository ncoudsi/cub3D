/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_sprite_texture_pos_y.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 09:16:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 08:25:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Calculating on the y axis, wich pixel of the sprite texture we want to draw.
**	Depends of multiple variables, mainly, the base size of the texture and of
**	the screen and the sprite height, relative to its distance to the camera.
*/

void	calculate_sprite_texture_pos_y(t_int_vector sprite_pixel_index)
{
	int				encule;

	encule = (sprite_pixel_index.y) * 256 - resolution_y() * 128 +
	sprite_height() * 128;
	set_sprite_texture_pos_y(((encule * dimension_y(sprite_texture())) /
	sprite_height()) / 256);
	if (sprite_texture_pos_y() > dimension_y(sprite_texture()))
		set_sprite_texture_pos_y(dimension_y(sprite_texture()));
	else if (sprite_texture_pos_y() < 0)
		set_sprite_texture_pos_y(0);
}
