/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_rcast_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:05:40 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/14 16:28:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_rcast_params  create_rcast_params()
{
    t_rcast_params  result;

    result.dir = NULL;
    result.plane = NULL;
    result.ray_dir = NULL;
    result.time = 0;
    result.old_time = 0;
    result.camera_x = 0;
	result.map_pos = NULL;
	result.step = NULL;
	result.side_dist = NULL;
	result.delta_dist = NULL;
	result.perpendicular_wall_dist = 0;
	result.perp_wall_dist_tab = NULL;
	result.hit = false;
	result.side = 0;
    return (result);
}
