/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_floor_colors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:34:29 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 14:04:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_floor_color(t_color *value)
{
	g_engine->map_params->floor_colors->r = value->r;
	g_engine->map_params->floor_colors->g = value->g;
	g_engine->map_params->floor_colors->b = value->b;
}
