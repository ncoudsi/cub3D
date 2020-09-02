/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_game.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:22:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/10 10:07:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	run_game()
{
	set_mlx_ptr(mlx_init());
	set_win_ptr(mlx_new_window(mlx_ptr(), resolution_x(), resolution_y(), "Cube3D"));
    set_img_ptr(mlx_new_image(mlx_ptr(), resolution_x(), resolution_y()));
	mlx_loop_hook (mlx_ptr(), &update_game, NULL);
	mlx_hook(win_ptr(), KEY_PRESS, (1L << 0), &key_press, NULL);
	mlx_hook(win_ptr(), KEY_RELEASE, (1L << 1), &key_release, NULL);
	mlx_loop(mlx_ptr());
}
