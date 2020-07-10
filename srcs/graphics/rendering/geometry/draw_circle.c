/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:08:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/10 09:21:37 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	draw_circle(t_vector center, int radius, t_color color)
{
	t_vector	index;

	index = create_vector(center.x - radius, center.y - radius);
	while (index.x < center.x + radius)
	{
		index.y = center.y - radius;
		while (index.y < center.y + radius)
		{
			if (distance_calculation(center, create_vector(index.x, index.y)) <= radius)
				put_pixel(create_vector(center.x + index.x, center.y + index.y), color);
			index.y++;
		}
		index.x++;
	}
}
