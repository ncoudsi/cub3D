/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pixel_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:21:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 21:39:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	get_pixel_index(t_vector pos, t_engine *engine)
{
	int	pixel_index;

	pixel_index = (pos.x + (engine->map_params->resolution->x * pos.y)) * 4;
	return (pixel_index);
}
