/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_perpendicular_wall_dist.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:21:40 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:21:44 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_perpendicular_wall_dist(float value)
{
	g_engine->rcast_params->perpendicular_wall_dist = value;
}
