/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_minimap_tile_size.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:42:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/11 14:28:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector	get_minimap_tile_size(t_vector minimap_tiles_nbr)
{
	t_vector	result;

	result.x = resolution_x() / minimap_tiles_nbr.x / 5;
	result.y = resolution_y() / minimap_tiles_nbr.y / 5;
	return (result);
}
