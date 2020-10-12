/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:17:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:49:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking if an entry of the map is a tile. An entry is considered as a tile
**	if it is : a walkable surface ('0'), a sprite ('2') or a spawn point
**	('N', 'S', 'E', 'W'). Walls ('1') or empty spaces (' ') are not tiles.
*/

t_bool	is_tile(char c)
{
	if (c == '0' || c == '2' || is_cardinal_point(c) == true)
		return (true);
	return (false);
}
