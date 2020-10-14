/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_right_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:46:55 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:41:54 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Getting the values for both x and y coordinates of the forward vector.
**	The forward indicates the perpendicular direction (right side) of the one
**	he is looking.Forward coordinates are expressed relativly to the
**	player coordinates.
*/

t_vector	get_right_value(void)
{
	t_vector	result;

	result.x = (cosf(pitch() - M_PI / 2)) * move_speed();
	result.y = -(sinf(pitch() - M_PI / 2)) * move_speed();
	return (result);
}
