/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_ceiling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:36:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/11 09:42:54 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_ceiling()
{
	t_vector		index;
	t_color	const	*color;

	index = create_vector(0, 0);
	color = ceiling_colors();
	while (index.y < resolution_y() / 2)
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
