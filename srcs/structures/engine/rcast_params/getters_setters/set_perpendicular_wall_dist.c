/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_perpendicular_wall_dist.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 16:08:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 16:09:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_perpendicular_wall_dist(float value)
{
	g_engine->rcast_params->perpendicular_wall_dist = value;
}
