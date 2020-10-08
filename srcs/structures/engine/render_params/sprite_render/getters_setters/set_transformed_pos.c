/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_transformed_pos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 10:00:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:36:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_transformed_pos(t_vector *value)
{
	g_engine->render_params->sprite_params->transformed_pos->x = value->x;
	g_engine->render_params->sprite_params->transformed_pos->y = value->y;
}
