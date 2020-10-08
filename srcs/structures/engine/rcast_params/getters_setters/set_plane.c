/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_plane.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 12:24:04 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:24:06 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_plane(t_vector *value)
{
	g_engine->rcast_params->plane->x = value->x;
	g_engine->rcast_params->plane->y = value->y;
}
