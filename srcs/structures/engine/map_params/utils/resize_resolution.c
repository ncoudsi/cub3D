/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_resolution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:16:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/25 14:32:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	resize_resolution()
{
	t_int_vector	screen_size;
	t_int_vector	tmp;

	screen_size = create_int_vector(0, 0);
	tmp = create_int_vector(resolution_x(), resolution_y());
	mlx_get_screen_size(mlx_ptr(), &screen_size.x, &screen_size.y);
	if (resolution_x() > screen_size.x)
		tmp.x = screen_size.x;
	if (resolution_y() > screen_size.y)
		tmp.y = screen_size.y;
	set_resolution(&tmp);
}