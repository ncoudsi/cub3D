/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:33:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/31 16:53:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    update_player()
{
    t_vector   *new_pos;

    new_pos = pos();
    if (g_engine->player->moves->rotation_right == true)
        update_direction(pitch() + ROTATION_SPEED);
    if (g_engine->player->moves->rotation_left == true)
        update_direction(pitch() - ROTATION_SPEED);
    if (g_engine->player->moves->forward == true)
        *new_pos = create_vector(pos_x() + forward_x(), pos_y() + forward_y());
    if (g_engine->player->moves->backward == true)
        *new_pos = create_vector(pos_x() - forward_x(), pos_y() - forward_y());
    if (g_engine->player->moves->right == true)
        *new_pos = create_vector(pos_x() + right_x(), pos_y() + right_y());
    if (g_engine->player->moves->left == true)
        *new_pos = create_vector(pos_x() - right_x(), pos_y() - right_y());
}