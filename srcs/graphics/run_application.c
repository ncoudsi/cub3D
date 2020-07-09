/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_application.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:22:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 11:19:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	run_application()
{
	set_mlx_ptr(mlx_init());
	g_engine->mlx_params->win_ptr = mlx_new_window(g_engine->mlx_params->mlx_ptr, g_engine->map_params->resolution->x, g_engine->map_params->resolution->y, "Cube3D");
	g_engine->mlx_params->img_ptr = mlx_new_image(g_engine->mlx_params->mlx_ptr, g_engine->map_params->resolution->x, g_engine->map_params->resolution->y);
	g_engine->mlx_params->pixels = mlx_get_data_addr(g_engine->mlx_params->img_ptr, &g_engine->mlx_params->bits_per_pixel, &g_engine->mlx_params->size_line, &g_engine->mlx_params->endian);
	mlx_put_image_to_window(g_engine->mlx_params->mlx_ptr, g_engine->mlx_params->win_ptr, g_engine->mlx_params->img_ptr, 0, 0);
	mlx_key_hook(g_engine->mlx_params->win_ptr, &key_handler, NULL);
	mlx_loop(g_engine->mlx_params->mlx_ptr);
}
