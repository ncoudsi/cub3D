/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:33:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 12:01:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	All the static functions are updating the player position when pressing
**	the corresponding key. First checking if the new position is valid
**	(not in a wall, and inside the map), then setting player position to the
**	new one.
*/

static void	move_forward(void)
{
	t_vector	new_pos;

	if(g_engine->player->moves->right == true ||
	g_engine->player->moves->left == true)
		new_pos = create_vector(pos_x() + forward_x() / 1.4f,
		pos_y() + forward_y() / 1.4f);
	else
		new_pos = create_vector(pos_x() + forward_x(), pos_y() + forward_y());
	wall_collision(&new_pos);
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

static void	move_backward(void)
{
	t_vector	new_pos;

	if(g_engine->player->moves->right == true ||
	g_engine->player->moves->left == true)
		new_pos = create_vector(pos_x() - forward_x() / 1.4f,
		pos_y() - forward_y() / 1.4f);
	else
		new_pos = create_vector(pos_x() - forward_x(), pos_y() - forward_y());
	wall_collision(&new_pos);
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

static void	move_right(void)
{
	t_vector	new_pos;

	if(g_engine->player->moves->forward == true ||
	g_engine->player->moves->backward == true)
		new_pos = create_vector(pos_x() + right_x() / 1.4f,
		pos_y() + right_y() / 1.4f);
	else
		new_pos = create_vector(pos_x() + right_x(), pos_y() + right_y());
	wall_collision(&new_pos);
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

static void	move_left(void)
{
	t_vector	new_pos;

	if(g_engine->player->moves->forward == true ||
	g_engine->player->moves->backward == true)
		new_pos = create_vector(pos_x() - right_x() / 1.4f,
		pos_y() - right_y() / 1.4f);
	else
		new_pos = create_vector(pos_x() - right_x(), pos_y() - right_y());
	wall_collision(&new_pos);
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

/*
**	Updating the position of the player depending on wich key is pressed.
**	Afterwards, update the distance of the sprites relativly to the new
**	player position and sort the sprite array accordingly.
*/

void		update_player(void)
{
	if (g_engine->player->moves->rotation_right == true)
		update_direction(pitch() - M_PI / 16.0f);
	if (g_engine->player->moves->rotation_left == true)
		update_direction(pitch() + M_PI / 16.0f);
	if (g_engine->player->moves->forward == true)
		move_forward();
	if (g_engine->player->moves->backward == true)
		move_backward();
	if (g_engine->player->moves->right == true)
		move_right();
	if (g_engine->player->moves->left == true)
		move_left();
	set_sprite_tab_dist();
	sort_sprite_tab();
}
