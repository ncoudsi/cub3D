/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:44:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 14:45:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	run_game(void)
{
	set_img_ptr(mlx_new_image(mlx_ptr(), resolution_x(), resolution_y()));
	set_pixels(mlx_get_data_addr(img_ptr(),
	&g_engine->mlx_params->bits_per_pixel, &g_engine->mlx_params->size_line,
	&g_engine->mlx_params->endian));
	mlx_loop_hook(mlx_ptr(), &update_game, NULL);
	mlx_hook(win_ptr(), KEY_PRESS, (1L << 0), &key_press, NULL);
	mlx_hook(win_ptr(), KEY_RELEASE, (1L << 1), &key_release, NULL);
	mlx_loop(mlx_ptr());
}
