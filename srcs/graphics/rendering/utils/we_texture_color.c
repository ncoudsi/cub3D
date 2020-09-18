/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   we_texture_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:55:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/18 14:12:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	we_texture_color()
{
	t_color	result;

	result.r = texels(we_texture())[texture_pos_x() * (bits_per_texel(we_texture()) / 8) + texture_pos_y() * text_size_line(we_texture()) + RED_INDEX];
	result.g = texels(we_texture())[texture_pos_x() * (bits_per_texel(we_texture()) / 8) + texture_pos_y() * text_size_line(we_texture()) + GREEN_INDEX];
	result.b = texels(we_texture())[texture_pos_x() * (bits_per_texel(we_texture()) / 8) + texture_pos_y() * text_size_line(we_texture()) + BLUE_INDEX];
	return (result);
}
