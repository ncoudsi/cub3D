/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:28:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 12:33:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	draw_rectangle(t_vector pos, t_vector dimension, t_color color)
{
	t_vector	index;

	index = create_vector(0, 0);
	while (index.y < dimension.y)
	{
		index.x = 0;
		while (index.x < dimension.x)
		{
			put_pixel(create_vector(index.x + pos.x, index.y + pos.y), color);
			index.x++;
		}
		index.y++;
	}
}
