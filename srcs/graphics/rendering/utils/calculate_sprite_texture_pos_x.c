/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_sprite_texture_pos_x.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 09:14:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 11:22:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

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