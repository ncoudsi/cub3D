/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:56:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 14:14:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    raycasting()
{
    int         index;
    t_vector    *ray_direction;

    index = 0;
    ray_direction = ray_dir();
    while (index < resolution_x())
    {
        set_camera_x(2 * index / resolution_x() - 1);
        ray_direction->x = dir_x() + plane_x() * camera_x();
        ray_direction->y = dir_y() + plane_y() * camera_x();
        index++;
    }
}
