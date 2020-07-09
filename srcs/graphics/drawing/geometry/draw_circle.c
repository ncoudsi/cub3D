/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:08:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 14:00:44 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	draw_circle(t_vector center, int radius, t_color color)
{
	t_vector	index;

	index = create_vector(0, 0);
	while (index.x < radius)
	{
		index.y = 0;
		while (index.x + index.y < radius)
		{
			put_pixel(create_vector(center.x + index.x, center.y + index.y), color);
			index.y++;
		}
		index.x++;
	}
}
