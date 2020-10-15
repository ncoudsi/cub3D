/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_minimap_tile_size.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:42:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 09:51:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Calculating the size of a minimap tile. Note that the las division is for
**	minimap size scaling. The smaller is the number, the bigger the minimap.
*/

t_vector	get_minimap_tile_size()
{
	t_vector	result;

	result.x = resolution_x() / map_size_x() / 5;
	result.y = resolution_y() / map_size_x() / 5;
	return (result);
}
