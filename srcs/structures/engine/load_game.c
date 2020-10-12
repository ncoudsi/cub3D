/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 14:00:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:43:02 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Setting values in all the structures contained in t_engine, to run the
**	program. If bmp_save is set as true, we don't run the game, but jump in
**	create_bmp() and quit the program.
*/

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
