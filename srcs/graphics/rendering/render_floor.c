/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_floor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:39:50 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/11 09:43:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_floor()
{
	t_vector		index;
	t_color const	*color;

	index = create_vector(0, resolution_y() / 2);
	color = floor_colors();
	while (index.y < resolution_y())
	{
		index.x = 0;
		while (index.x < resolution_x())
		{
			put_pixel(index, *color);
			index.x++;
		}
		index.y++;
	}
}
