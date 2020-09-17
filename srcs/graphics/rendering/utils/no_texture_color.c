/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_texture_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:36:47 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 14:36:51 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	no_texture_color()
{
	t_color	result;

	result.r = texels(no_texture())[texture_pos_x() + texture_pos_y() * text_size_line(no_texture()) + RED_INDEX];
	result.g = texels(no_texture())[texture_pos_x() + texture_pos_y() * text_size_line(no_texture()) + GREEN_INDEX];
	result.b = texels(no_texture())[texture_pos_x() + texture_pos_y() * text_size_line(no_texture()) + BLUE_INDEX];
	return (result);
}
