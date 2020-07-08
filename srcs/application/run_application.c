/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_application.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:22:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 12:23:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	run_application(t_engine *engine)
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, engine->map_params->resolution->x,
	engine->map_params->resolution->y, "Cube3D");
	(void)win_ptr;
	mlx_key_hook(win_ptr, &key_handler, NULL);
	mlx_loop(mlx_ptr);
}
