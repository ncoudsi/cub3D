/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_map_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:13:25 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 16:01:05 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_map_pos(t_int_vector *value)
{
	g_engine->rcast_params->map_pos->x = value->x;
	g_engine->rcast_params->map_pos->y = value->y;
}
