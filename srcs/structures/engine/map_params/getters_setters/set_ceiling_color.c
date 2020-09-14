/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_ceiling_color.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:32:38 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 13:52:52 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_ceiling_color(t_color *value)
{
	g_engine->map_params->ceiling_color->r = value->r;
	g_engine->map_params->ceiling_color->g = value->g;
	g_engine->map_params->ceiling_color->b = value->b;
}
