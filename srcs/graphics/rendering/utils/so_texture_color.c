/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_texture_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:37:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/18 11:41:51 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	so_texture_color()
{
	t_color	result;

	result.r = texels(so_texture())[texture_pos_x() * 4 + texture_pos_y() * text_size_line(so_texture()) + RED_INDEX];
	result.g = texels(so_texture())[texture_pos_x() * 4 + texture_pos_y() * text_size_line(so_texture()) + GREEN_INDEX];
	result.b = texels(so_texture())[texture_pos_x() * 4 + texture_pos_y() * text_size_line(so_texture()) + BLUE_INDEX];
	return (result);
}
