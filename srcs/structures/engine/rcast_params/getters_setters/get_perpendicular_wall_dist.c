/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_perpendicular_wall_dist.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 16:08:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 16:08:46 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	perpendicular_wall_dist()
{
	return (g_engine->rcast_params->perpendicular_wall_dist);
}
