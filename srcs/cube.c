/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 12:19:10 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	main(void)
{
	t_engine		*engine;
	void			*mlx_ptr;
	void			*win_ptr;
	int				fd;

	engine = malloc_engine();
	fd = open("./ressources/map.cub", O_RDONLY);
	if (fd == -1)
		error_exit(FILE_ERROR);
	fill_map_params(fd, engine->map_params);
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, engine->map_params->resolution->x,
	engine->map_params->resolution->y, "Cube3D");
	(void)win_ptr;
	mlx_key_hook(win_ptr, &key_handler, NULL);
	mlx_loop(mlx_ptr);
	free_engine(engine);
	return (0);
}
