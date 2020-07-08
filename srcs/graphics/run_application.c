/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_application.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:22:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 21:06:00 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	run_application(t_engine *engine)
{
	engine->mlx_params->mlx_ptr = mlx_init();
	engine->mlx_params->win_ptr = mlx_new_window(engine->mlx_params->mlx_ptr, engine->map_params->resolution->x,
	engine->map_params->resolution->y, "Cube3D");
	engine->mlx_params->img_ptr = mlx_new_image(engine->mlx_params->mlx_ptr, engine->map_params->resolution->x, engine->map_params->resolution->y);
	engine->mlx_params->pixels = mlx_get_data_addr(engine->mlx_params->img_ptr, &engine->mlx_params->bits_per_pixel, &engine->mlx_params->size_line, &engine->mlx_params->endian);
	engine->mlx_params->pixels[get_pixel_index(create_vector(10, 10), *engine)] = 255;
	engine->mlx_params->pixels[get_pixel_index(create_vector(20, 20), *engine)] = 255;
	engine->mlx_params->pixels[get_pixel_index(create_vector(30, 30), *engine)] = 255;
	engine->mlx_params->pixels[get_pixel_index(create_vector(40, 40), *engine)] = 255;
	engine->mlx_params->pixels[get_pixel_index(create_vector(50, 50), *engine)] = 255;
	engine->mlx_params->pixels[get_pixel_index(create_vector(60, 60), *engine)] = 255;
	mlx_put_image_to_window(engine->mlx_params->mlx_ptr, engine->mlx_params->win_ptr, engine->mlx_params->img_ptr, 0, 0);
	mlx_key_hook(engine->mlx_params->win_ptr, &key_handler, NULL);
	mlx_loop(engine->mlx_params->mlx_ptr);
}
