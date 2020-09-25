/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:33:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/25 11:46:00 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	move_forward()
{
	t_vector	new_pos;

	new_pos = create_vector(pos_x() + forward_x(), pos_y() + forward_y());
	if (new_pos.x < 0)
		new_pos.x = 0;
	else if (new_pos.x > map_size_x())
		new_pos.x = map_size_x();
	if (new_pos.y < 0)
		new_pos.y = 0;
	else if (new_pos.y > map_size_y())
		new_pos.y = map_size_y();
	if (new_pos.x == map_size_x() && new_pos.y == map_size_y())
		new_pos = create_vector(map_size_x() - 0.01f, map_size_y() - 0.01f);
	set_pos(&new_pos);
}

static void	move_backward()
{
	t_vector	new_pos;

	new_pos = create_vector(pos_x() - forward_x(), pos_y() - forward_y());
	if (new_pos.x < 0)
		new_pos.x = 0;
	else if (new_pos.x > map_size_x())
		new_pos.x = map_size_x();
	if (new_pos.y < 0)
		new_pos.y = 0;
	else if (new_pos.y > map_size_y())
		new_pos.y = map_size_y();
	if (new_pos.x == map_size_x() && new_pos.y == map_size_y())
		new_pos = create_vector(map_size_x() - 0.01f, map_size_y() - 0.01f);
	set_pos(&new_pos);
}

static void	move_right()
{
	t_vector	new_pos;

	new_pos = create_vector(pos_x() + right_x(), pos_y() + right_y());
	if (new_pos.x < 0)
		new_pos.x = 0;
	else if (new_pos.x > map_size_x())
		new_pos.x = map_size_x();
	if (new_pos.y < 0)
		new_pos.y = 0;
	else if (new_pos.y > map_size_y())
		new_pos.y = map_size_y();
	if (new_pos.x == map_size_x() && new_pos.y == map_size_y())
		new_pos = create_vector(map_size_x() - 0.01f, map_size_y() - 0.01f);
	set_pos(&new_pos);
}

static void	move_left()
{
	t_vector	new_pos;

	new_pos = create_vector(pos_x() - right_x(), pos_y() - right_y());
	if (new_pos.x < 0)
		new_pos.x = 0;
	else if (new_pos.x > map_size_x())
		new_pos.x = map_size_x();
	if (new_pos.y < 0)
		new_pos.y = 0;
	else if (new_pos.y > map_size_y())
		new_pos.y = map_size_y();
	if (new_pos.x == map_size_x() && new_pos.y == map_size_y())
		new_pos = create_vector(map_size_x() - 0.01f, map_size_y() - 0.01f);
	set_pos(&new_pos);
}

void	update_player()
{
	if (g_engine->player->moves->rotation_right == true)
		update_direction(pitch() - ROTATION_SPEED);
	if (g_engine->player->moves->rotation_left == true)
		update_direction(pitch() + ROTATION_SPEED);
	if (g_engine->player->moves->forward == true)
		move_forward();
	if (g_engine->player->moves->backward == true)
		move_backward();
	if (g_engine->player->moves->right == true)
		move_right();
	if (g_engine->player->moves->left == true)
		move_left();
}
