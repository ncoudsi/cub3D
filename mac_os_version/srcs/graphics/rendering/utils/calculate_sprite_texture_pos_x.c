/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_sprite_texture_pos_x.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 09:14:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 08:23:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Calculating on the x axis, wich pixel of the sprite texture we want to draw.
**	Depends of multiple variables, mainly, the base size of the texture and of
**	the screen and the sprite width, relative to its distance to the camera.
*/

void	calculate_sprite_texture_pos_x(t_int_vector sprite_pixel_index)
{
	set_sprite_texture_pos_x((int)(256 * (sprite_pixel_index.x -
	(-sprite_width() / 2 + sprite_screen_x())) * dimension_x(sprite_texture()) /
	sprite_width()) / 256);
	if (sprite_texture_pos_x() > dimension_x(sprite_texture()))
		set_sprite_texture_pos_x(dimension_x(sprite_texture()));
	else if (sprite_texture_pos_x() < 0)
		set_sprite_texture_pos_x(0);
}
