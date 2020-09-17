/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_texture_color.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:55:45 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 14:55:56 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	sprite_texture_color()
{
	t_color	result;

	result.r = texels(sprite_texture())[texture_pos_x() + texture_pos_y() * text_size_line(sprite_texture()) + RED_INDEX];
	result.g = texels(sprite_texture())[texture_pos_x() + texture_pos_y() * text_size_line(sprite_texture()) + GREEN_INDEX];
	result.b = texels(sprite_texture())[texture_pos_x() + texture_pos_y() * text_size_line(sprite_texture()) + BLUE_INDEX];
	return (result);
}
