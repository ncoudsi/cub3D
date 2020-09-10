/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:38:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/10 14:48:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	rendering()
{
	mlx_destroy_image(mlx_ptr(), img_ptr());
    set_img_ptr(mlx_new_image(mlx_ptr(), resolution_x(), resolution_y()));
	set_pixels(mlx_get_data_addr(img_ptr(), &g_engine->mlx_params->bits_per_pixel, &g_engine->mlx_params->size_line, &g_engine->mlx_params->endian));
	mlx_put_image_to_window(mlx_ptr(), win_ptr(), img_ptr(), 0, 0);
}
