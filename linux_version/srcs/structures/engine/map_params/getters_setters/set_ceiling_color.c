/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_ceiling_color.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:08:38 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 09:28:20 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_ceiling_color(t_color *value)
{
	g_engine->map_params->ceiling_color->r = value->r;
	g_engine->map_params->ceiling_color->g = value->g;
	g_engine->map_params->ceiling_color->b = value->b;
	g_engine->map_params->ceiling_color->int_color = value->int_color;
}
