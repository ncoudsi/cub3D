/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_rcast_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 12:00:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 13:34:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    load_rcast_params()
{
    t_vector    dir_value;
    t_vector    plane_value;

    dir_value = get_dir_value();
    plane_value = get_plane_value();
    set_dir(malloc_vector(dir_value.x, dir_value.y));
    set_plane(malloc_vector(plane_value.x, plane_value.y));
    set_ray_dir(malloc_vector(0, 0));
    set_rcast_time(0);
    set_old_time(0);
    set_camera_x(0);
}