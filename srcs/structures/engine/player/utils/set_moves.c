/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:15:32 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:14:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_moves(int key)
{
	if (key == W_KEY)
		g_engine->player->moves->forward = true;
	else if (key == S_KEY)
		g_engine->player->moves->backward = true;
	else if (key == D_KEY)
		g_engine->player->moves->right = true;
	else if (key == A_KEY)
		g_engine->player->moves->left = true;
	else if (key == RIGHT_ARROW)
		g_engine->player->moves->rotation_right = true;
	else if (key == LEFT_ARROW)
		g_engine->player->moves->rotation_left = true;
}
