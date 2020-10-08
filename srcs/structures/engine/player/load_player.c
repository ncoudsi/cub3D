/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:44:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:18:35 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static t_vector	get_spawn_pos(void)
{
	t_vector		result;
	t_int_vector	index;
	char const		**file_map;

	result = create_vector(0, 0);
	index = create_int_vector(0, 0);
	file_map = map();
	while (result.x == 0 && result.y == 0)
	{
		index.x = 0;
		while (file_map[index.y][index.x] != '\0' &&
		(result.x == 0 && result.y == 0))
		{
			if (is_cardinal_point(file_map[index.y][index.x]) == true)
				result = create_vector(index.x, index.y);
			index.x++;
		}
		index.y++;
	}
	return (result);
}

static void		attributes_allocation(void)
{
	g_engine->player->pos = malloc_vector(0, 0);
	g_engine->player->forward = malloc_vector(0, 0);
	g_engine->player->right = malloc_vector(0, 0);
	g_engine->player->moves = malloc_moves();
}

void			load_player(void)
{
	t_vector	spawn_pos;
	t_vector	forward_value;
	t_vector	right_value;

	attributes_allocation();
	spawn_pos = get_spawn_pos();
	set_pos(&spawn_pos);
	set_pitch(get_pitch_value());
	forward_value = get_forward_value();
	right_value = get_right_value();
	set_forward(&forward_value);
	set_right(&right_value);
}
