/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_texture_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:37:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/23 16:54:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	so_texture_color()
{
	t_color			result;

	result.r = texels(so_texture())[texture_pos_x() * (bits_per_texel(so_texture()) / 8) + texture_pos_y() * text_size_line(so_texture()) + RED_INDEX];
	result.g = texels(so_texture())[texture_pos_x() * (bits_per_texel(so_texture()) / 8) + texture_pos_y() * text_size_line(so_texture()) + GREEN_INDEX];
	result.b = texels(so_texture())[texture_pos_x() * (bits_per_texel(so_texture()) / 8) + texture_pos_y() * text_size_line(so_texture()) + BLUE_INDEX];
	result.int_color = (result.r << 16) + (result.g << 8) + result.b;
	return (result);
}
