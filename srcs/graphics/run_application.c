/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_application.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:22:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 12:34:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	run_application()
{
	set_mlx_ptr(mlx_init());
	set_win_ptr(mlx_new_window(mlx_ptr(), resolution_x(), resolution_y(), "Cube3D"));
	set_img_ptr(mlx_new_image(mlx_ptr(), resolution_x(), resolution_y()));
	set_pixels(mlx_get_data_addr(img_ptr(), &g_engine->mlx_params->bits_per_pixel, &g_engine->mlx_params->size_line, &g_engine->mlx_params->endian));
	draw_rectangle(create_vector(20, 20), create_vector(100, 100), create_color(255, 0, 0));
	mlx_put_image_to_window(mlx_ptr(), win_ptr(), img_ptr(), 0, 0);
	mlx_key_hook(win_ptr(), &key_handler, NULL);
	mlx_loop(mlx_ptr());
}
