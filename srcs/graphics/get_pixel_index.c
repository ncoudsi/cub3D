/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pixel_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:21:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 12:52:54 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	get_pixel_index(t_vector pos)
{
	int	pixel_index;

	if(pos.x < 0 || pos.x > resolution_x() ||
	pos.y < 0 || pos.y > resolution_y())
		error_exit_vector(pos, PIXEL_POS_ERROR);
	pixel_index = (pos.x + (g_engine->map_params->resolution->x * pos.y)) * 4;
	return (pixel_index);
}
