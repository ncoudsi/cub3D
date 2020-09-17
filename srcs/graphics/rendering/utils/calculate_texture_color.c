/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_color.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:28:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 16:35:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_color	calculate_texture_color(t_int_vector *camera_index)
{
	t_color	result;
	float	float_text_y;

	float_text_y = ((camera_index->y - wall_top()) * texture_step());
	set_texture_pos_y((int)(float_text_y));
	set_texture_pos_x(round(texture_pos_x_tab_index(camera_index->x)));
	if (side_tab_index(camera_index->x) == 0)
		result = we_texture_color();
	else if (side_tab_index(camera_index->x) == 1)
		result = no_texture_color();
	else if (side_tab_index(camera_index->x) == 2)
		result = ea_texture_color();
	else
		result = so_texture_color();
	// printf("R>%i\nG>%i\nB>%i\n", result.r, result.g, result.b);
	return (result);
}
