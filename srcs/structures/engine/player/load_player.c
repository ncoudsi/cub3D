/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:44:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/14 15:23:51 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static t_vector	get_spawn_pos()
{
	t_vector	result;
	t_vector	index;
	char		**file_map;

	result = create_vector(0, 0);
	index = create_vector(0, 0);
	file_map = map();
	while (result.x == 0 && result.y == 0)
	{
		index.x = 0;
		while (file_map[(int)index.y][(int)index.x] != '\0' &&
		(result.x == 0 && result.y == 0))
		{
			if (is_cardinal_point(file_map[(int)index.y][(int)index.x]) == true)
				result = create_vector(index.x, index.y);
			index.x++;
		}
		index.y++;
	}
	return (result);
}

void	load_player()
{
	t_vector	spawn_pos;

	spawn_pos = map_pos_to_pixel_pos(get_spawn_pos());
	set_pos(malloc_vector(spawn_pos.x, spawn_pos.y));
}
