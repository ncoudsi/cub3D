/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_render_bmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:33:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 08:05:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Rendering the first image of the program. It will be written in the bitmap
**	file instead of being displayed on the screen.
*/

void	pre_render_bmp(void)
{
	set_img_ptr(mlx_new_image(mlx_ptr(), resolution_x(), resolution_y()));
	set_pixels(mlx_get_data_addr(img_ptr(),
	&g_engine->mlx_params->bits_per_pixel, &g_engine->mlx_params->size_line,
	&g_engine->mlx_params->endian));
	raycasting();
	bmp_rendering();
}
