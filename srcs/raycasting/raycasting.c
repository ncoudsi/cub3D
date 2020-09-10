/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:56:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/10 12:02:31 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    raycasting()
{
	int	index;
	t_int_vector	map_pos_value;
	float			*lol;

	lol = (float *)malloc(sizeof(float) * resolution_x());
	if (lol == NULL)
		error_exit(MALLOC_ERROR);
	for (int i = 0; i < resolution_x(); i ++)
		lol[i] = 0;
	index = 0;
	while (index < resolution_x())
	{
		map_pos_value = create_int_vector(pos_x(), pos_y());
		set_map_pos(&map_pos_value);
		set_camera_x(2.0f * (float)index / resolution_x() - 1.0f);
		update_ray_dir_value();
		update_delta_dist_value();
		update_step_and_side_dist_values();
		set_hit(false);
		hitpoint_detection();
	if (side() == 0)
		set_pos_to_wall_dist((map_pos_x() - pos_x() + (1.0f - step_x()) / 2.0f) / ray_dir_x());
	else
		set_pos_to_wall_dist((map_pos_y() - pos_y() + (1.0f - step_y()) / 2.0f) / ray_dir_y());
	lol[index] = pos_to_wall_dist();
		index++;
	}
	for (int i = 0; i < resolution_x(); i++)
		printf("%f\n", lol[i]);
	exit(0);
}
