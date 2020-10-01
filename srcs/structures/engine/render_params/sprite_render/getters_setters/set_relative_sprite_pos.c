/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_relative_sprite_pos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:57:04 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 09:57:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_relative_sprite_pos(t_vector *value)
{
	g_engine->render_params->sprite_params->relative_sprite_pos->x = value->x;
	g_engine->render_params->sprite_params->relative_sprite_pos->y = value->y;
}