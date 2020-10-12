/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:44:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:42:01 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Going throught all the map to find a cardinal point. Return its coordinates
**	as a t_vector. Since the position coordinates wont be entire values
**	throughout the program, we dont set it as a t_int_vector.
*/

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

/*
**	Allocating memory for all the pointers in the t_player structure.
*/

static void		attributes_allocation(void)
{
	g_engine->player->pos = malloc_vector(0, 0);
	g_engine->player->forward = malloc_vector(0, 0);
	g_engine->player->right = malloc_vector(0, 0);
	g_engine->player->moves = malloc_moves();
}

/*
**	Setting variable in t_player structure. Need memory allocation first.
*/

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
