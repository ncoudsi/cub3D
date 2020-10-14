/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   we_texture_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:55:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/24 10:01:56 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	we_texture_color(t_int_vector *camera_index)
{
	char	*tmp_pixels;
	char	*tmp_texels;

	tmp_pixels = (char *)pixels();
	tmp_texels = (char *)texels(we_texture());
	*((unsigned int *)tmp_pixels + camera_index->x + camera_index->y *
	size_line() / 4) = *((unsigned int *)tmp_texels + texture_pos_x() +
	texture_pos_y() * text_size_line(we_texture()) / 4);
}
