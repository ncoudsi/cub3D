/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprite_pixel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 08:44:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 08:33:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Rendering one pixel of the sprite texture. Accordingly to the MLX behavior,
**	every image has all its pixels colors in one string. Every group of 4
**	characters represent a pixel (r, g, b, a). In a matter of optimisation,
**	to avoid too many acces to the string, we cast it in unsigned int * since
**	we need 4 characters to draw a pixel. Then we simply copy the right pixel
**	of the sprite texture in the image of the screen. At last, since the sprite
**	has transparent parts, we consider that, if a pixel color is 0, 0, 0 (pitch
**	black), it is transparent.
*/

void	render_sprite_pixel(t_int_vector sprite_pixel_index)
{
	unsigned int	color;
	unsigned int	*tmp_sprite_pixels;
	unsigned int	*tmp_pixels;

	tmp_sprite_pixels = (unsigned int *)texels(sprite_texture());
	tmp_pixels = (unsigned int *)pixels();
	color = tmp_sprite_pixels[sprite_texture_pos_x() +
	dimension_x(sprite_texture()) * sprite_texture_pos_y()];
	if ((color & 0x00FFFFFF) != 0)
		tmp_pixels[sprite_pixel_index.x + sprite_pixel_index.y *
	resolution_x()] = color;
}
