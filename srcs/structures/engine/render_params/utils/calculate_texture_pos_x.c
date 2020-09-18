/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_texture_pos_x.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:26:22 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/18 10:41:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	calculate_texture_pos_x()
{
	int	result;
	int	texture_width;

	if (side() == 0)
		texture_width = dimension_x(we_texture());
	else if (side() == 1)
		texture_width = dimension_x(no_texture());
	else if (side() == 2)
		texture_width = dimension_x(ea_texture());
	else
		texture_width = dimension_x(so_texture());
	result = (int)(wall_hitpoint_x() * (float)texture_width);
	if (side() == 0)
		result = texture_width - result - 1;
	else if (side() == 3)
		result = texture_width - result - 1;
	return (result);
}
