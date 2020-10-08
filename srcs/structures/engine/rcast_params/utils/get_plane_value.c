/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plane_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:29:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:20:59 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector	get_plane_value(void)
{
	t_vector	result;

	result.x = (cosf(pitch() - M_PI / 2)) * PLANE_LENGTH;
	result.y = -(sinf(pitch() - M_PI / 2)) * PLANE_LENGTH;
	return (result);
}
