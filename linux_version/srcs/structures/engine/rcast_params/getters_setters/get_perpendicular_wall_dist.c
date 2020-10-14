/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_perpendicular_wall_dist.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:22:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:22:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	perpendicular_wall_dist(void)
{
	return (g_engine->rcast_params->perpendicular_wall_dist);
}
