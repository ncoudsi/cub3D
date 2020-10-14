/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_forward_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:45:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:40:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Getting the values for both x and y coordinates of the forward vector.
**	The forward indicates the direction in wich the player is looking.
**	Forward coordinates are expressed relativly to the player coordinates.
*/

t_vector	get_forward_value(void)
{
	t_vector	result;

	result.x = cosf(pitch()) * move_speed();
	result.y = -(sinf(pitch())) * move_speed();
	return (result);
}
