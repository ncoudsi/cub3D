/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_mlx_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 08:01:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 09:25:17 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Setting the variables in t_mlx_params structure, needed for further
**	rendering throught MLX functions.
*/

void	load_mlx_params(void)
{
	set_img_ptr(mlx_new_image(mlx_ptr(), resolution_x(), resolution_y()));
	set_pixels(mlx_get_data_addr(img_ptr(),
	&g_engine->mlx_params->bits_per_pixel, &g_engine->mlx_params->size_line,
	&g_engine->mlx_params->endian));
	set_win_ptr(mlx_new_window(mlx_ptr(), resolution_x(),
	resolution_y(), "Cube3D"));
}
