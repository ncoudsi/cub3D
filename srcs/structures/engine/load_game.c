/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 14:00:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/07 14:47:39 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	load_game(int fd)
{
	load_map_params(fd);
	set_mlx_ptr(mlx_init());
	resize_resolution();
	load_textures();
	load_player();
	load_rcast_params();
	load_render_params();
	if (bmp_save() == true)
		create_bmp();
	load_mlx_params();
}
