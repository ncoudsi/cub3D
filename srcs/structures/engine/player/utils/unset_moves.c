/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:20:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/31 16:50:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    unset_moves(int key)
{
       if (key == W_KEY)
        g_engine->player->moves->forward = false;
    else if (key == S_KEY)
        g_engine->player->moves->backward = false;
    else if (key == D_KEY)
        g_engine->player->moves->right = false;
    else if (key == A_KEY)
        g_engine->player->moves->left = false;
    else if (key == RIGHT_ARROW)
        g_engine->player->moves->rotation_right = false;
    else if (key == LEFT_ARROW)
        g_engine->player->moves->rotation_left = false;
}