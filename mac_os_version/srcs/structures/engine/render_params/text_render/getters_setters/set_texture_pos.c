/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_texture_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:00:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:50:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_texture_pos(t_int_vector *value)
{
	g_engine->render_params->texture_params->texture_pos->x = value->x;
	g_engine->render_params->texture_params->texture_pos->y = value->y;
}
