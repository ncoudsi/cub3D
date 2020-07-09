/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pixel_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:21:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 11:18:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	get_pixel_index(t_vector pos)
{
	int	pixel_index;

	pixel_index = (pos.x + (g_engine->map_params->resolution->x * pos.y)) * 4;
	return (pixel_index);
}
