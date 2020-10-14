/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_absolute_sprite_pos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:54:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:31:21 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_absolute_sprite_pos(t_vector *value)
{
	g_engine->render_params->sprite_params->absolute_sprite_pos->x = value->x;
	g_engine->render_params->sprite_params->absolute_sprite_pos->y = value->y;
}
