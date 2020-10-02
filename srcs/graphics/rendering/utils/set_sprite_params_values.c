/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprite_params_values.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:17:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 08:36:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	set_poses_values(int sprite_index)
{
	t_vector	tmp_rel_sprite_pos;
	t_vector	tmp_transformed_pos;

	set_absolute_sprite_pos((t_vector *)sprite_pos((t_sprite *)
	sprite_tab_index(sprite_index)));
	tmp_rel_sprite_pos = create_vector(absolute_sprite_pos_x()
	- pos_x(), absolute_sprite_pos_y() - pos_y());
	set_relative_sprite_pos(&tmp_rel_sprite_pos);
	set_inverted_matrix(1.0f / (plane_x() * dir_y() - dir_x() *plane_y()));
	tmp_transformed_pos = create_vector(inverted_matrix() *
	(dir_y() * relative_sprite_pos_x() - dir_x() * relative_sprite_pos_y()),
	inverted_matrix() * (-plane_y() * relative_sprite_pos_x() + plane_x() *
	relative_sprite_pos_y()));
	set_transformed_pos(&tmp_transformed_pos);
}

void	set_sprite_params_values(int sprite_index)
{
	set_poses_values(sprite_index);
	set_sprite_screen_x((int)((resolution_x() / 2) *
	(1 + transformed_pos_x() / transformed_pos_y())));
	set_sprite_height(abs((int)(resolution_y() / transformed_pos_y())));
	set_sprite_top(-sprite_height() / 2 + resolution_y() / 2);
	if (sprite_top() < 0)
		set_sprite_top(0);
	set_sprite_bottom(sprite_height() / 2 + resolution_y() / 2);
	if ((sprite_bottom()) >= resolution_y())
		set_sprite_bottom(resolution_y() - 1);
	set_sprite_width(abs((int)(resolution_y() / transformed_pos_y())));
	set_sprite_left(-sprite_width() / 2 + sprite_screen_x());
	if (sprite_left() < 0)
		set_sprite_left(0);
	set_sprite_right(sprite_width() / 2 + sprite_screen_x());
	if (sprite_right() >= resolution_x())
		set_sprite_right(resolution_x() - 1);
}