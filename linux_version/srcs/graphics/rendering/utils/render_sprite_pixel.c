/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprite_pixel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 08:44:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 13:39:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

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
