/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:08:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 09:22:22 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Rendering a single colored circle.
*/

void	draw_circle(t_vector center, int radius, t_color color)
{
	t_int_vector	index;

	index = create_int_vector(center.x - radius, center.y - radius);
	while (index.y < center.y + radius)
	{
		index.x = center.x - radius;
		while (index.x < center.x + radius)
		{
			if (distance_calculation(center,
			create_vector(index.x, index.y)) <= radius)
				put_pixel(create_int_vector(index.x, index.y), color);
			index.x++;
		}
		index.y++;
	}
}
