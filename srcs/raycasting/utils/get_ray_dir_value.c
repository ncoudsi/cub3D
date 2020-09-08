/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ray_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:20:37 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/08 12:21:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	get_ray_dir_value()
{
	t_vector 	*ray_dir_value;

	ray_dir_value = ray_dir();
	ray_dir_value->x = dir_x() + plane_x() * camera_x();
	ray_dir_value->y = dir_y() + plane_y() * camera_x();
}
