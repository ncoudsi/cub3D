/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprite_texture_pos.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 10:44:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 10:44:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_sprite_texture_pos(t_int_vector *value)
{
	g_engine->render_params->sprite_params->sprite_texture_pos->x = value->x;
	g_engine->render_params->sprite_params->sprite_texture_pos->y = value->y;
}