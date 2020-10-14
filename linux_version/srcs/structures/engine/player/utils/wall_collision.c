/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall_collision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 11:26:43 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 12:19:16 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking if the new position of the player is in or to close to a wall and
**	re-adjusting it accordingly.
*/

void	wall_collision(t_vector *new_pos)
{
	if (g_engine->map_params->map[(int)new_pos->y][(int)pos_x()] == '1' ||
	g_engine->map_params->map[(int)(new_pos->y + (MOVE_SPEED - 0.1f))][(int)pos_x()] == '1' ||
	g_engine->map_params->map[(int)(new_pos->y - (MOVE_SPEED - 0.1f))][(int)pos_x()] == '1')
		*new_pos = create_vector(new_pos->x, pos_y());
	if (g_engine->map_params->map[(int)pos_y()][(int)new_pos->x] == '1' ||
	g_engine->map_params->map[(int)pos_y()][(int)(new_pos->x + (MOVE_SPEED - 0.1f))] == '1' ||
	g_engine->map_params->map[(int)pos_y()][(int)(new_pos->x - (MOVE_SPEED - 0.1f))] == '1')
		*new_pos = create_vector(pos_x(), new_pos->y);
}
