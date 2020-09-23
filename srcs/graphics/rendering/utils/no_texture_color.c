/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_texture_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:36:47 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/23 15:44:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	no_texture_color()
{
	t_color	result;

	result.r = texels(no_texture())[texture_pos_x() * (bits_per_texel(no_texture()) / 8) + texture_pos_y() * text_size_line(no_texture()) + RED_INDEX];
	result.g = texels(no_texture())[texture_pos_x() * (bits_per_texel(no_texture()) / 8) + texture_pos_y() * text_size_line(no_texture()) + GREEN_INDEX];
	result.b = texels(no_texture())[texture_pos_x() * (bits_per_texel(no_texture()) / 8) + texture_pos_y() * text_size_line(no_texture()) + BLUE_INDEX];
	result.int_color = ((result.r & 0xff) << 16) + ((result.g & 0xff) << 8) + (result.b & 0xff);
	return (result);
}
