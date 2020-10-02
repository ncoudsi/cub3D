/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 14:00:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 14:01:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	load_game(int fd)
{
	load_map_params(fd);
	set_mlx_ptr(mlx_init());
	resize_resolution();
	set_win_ptr(mlx_new_window(mlx_ptr(), resolution_x(),
	resolution_y(), "Cube3D"));
	load_textures();
	load_player();
	load_rcast_params();
	load_render_params();
}
