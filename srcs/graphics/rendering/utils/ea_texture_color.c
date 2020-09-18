/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ea_texture_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:55:22 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/18 11:42:30 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	ea_texture_color()
{
	t_color	result;

	result.r = texels(ea_texture())[texture_pos_x() * 4 + texture_pos_y() * text_size_line(ea_texture()) + RED_INDEX];
	result.g = texels(ea_texture())[texture_pos_x() * 4 + texture_pos_y() * text_size_line(ea_texture()) + GREEN_INDEX];
	result.b = texels(ea_texture())[texture_pos_x() * 4 + texture_pos_y() * text_size_line(ea_texture()) + BLUE_INDEX];
	return (result);
}
