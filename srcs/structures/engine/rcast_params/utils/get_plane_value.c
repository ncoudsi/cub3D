/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plane_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:29:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 16:35:05 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Calculating the plane vector, wich represents the perpendicular of the
**	player direction. Close to player_right, except it's calculated with
**	PLANE_LENGTH.
*/

t_vector	get_plane_value(void)
{
	t_vector	result;

	result.x = (cosf(pitch() - M_PI / 2)) * PLANE_LENGTH;
	result.y = -(sinf(pitch() - M_PI / 2)) * PLANE_LENGTH;
	return (result);
}
