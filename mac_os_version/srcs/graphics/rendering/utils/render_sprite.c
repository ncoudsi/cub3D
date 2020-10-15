/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 13:27:26 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 08:20:12 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Rendering a sprite, pixel by pixel, from left to right and from top to
**	bottom.
*/

void	render_sprite(void)
{
	t_int_vector	sprite_pixel_index;

	sprite_pixel_index = create_int_vector(0, 0);
	sprite_pixel_index.x = sprite_left();
	while (sprite_pixel_index.x < sprite_right())
	{
		calculate_sprite_texture_pos_x(sprite_pixel_index);
		if (is_drawable_sprite_pixel(sprite_pixel_index) == true)
		{
			sprite_pixel_index.y = sprite_top();
			while (sprite_pixel_index.y < sprite_bottom())
			{
				calculate_sprite_texture_pos_y(sprite_pixel_index);
				render_sprite_pixel(sprite_pixel_index);
				sprite_pixel_index.y++;
			}
		}
		sprite_pixel_index.x++;
	}
}
