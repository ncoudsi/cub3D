/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_floor_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:08:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 09:27:39 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_floor_color(t_color *value)
{
	g_engine->map_params->floor_color->r = value->r;
	g_engine->map_params->floor_color->g = value->g;
	g_engine->map_params->floor_color->b = value->b;
	g_engine->map_params->floor_color->int_color = value->int_color;
}
