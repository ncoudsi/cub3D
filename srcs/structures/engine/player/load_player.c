/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:44:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 12:14:08 by ncoudsi          ###   ########.fr       */
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
	t_vector	forward_value;
	t_vector	right_value;

	spawn_pos = get_spawn_pos();
	set_player_pos(malloc_vector(spawn_pos.x, spawn_pos.y));
	set_pitch(get_pitch_value());
	forward_value = get_forward_value();
	right_value	= get_right_value();
	set_forward(malloc_vector(forward_value.x, forward_value.y));
	set_right(malloc_vector(right_value.x, right_value.y));
}
