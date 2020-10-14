/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_ray_dir_value.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:20:37 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 08:50:56 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Updating the ray direction. Each ray starts from the player position
**	and goes in the direction of the camera_x pixel of the screen.
*/

void	update_ray_dir_value(void)
{
	t_vector	ray_dir_value;

	ray_dir_value.x = dir_x() + plane_x() * camera_x();
	ray_dir_value.y = dir_y() + plane_y() * camera_x();
	set_ray_dir(&ray_dir_value);
}
