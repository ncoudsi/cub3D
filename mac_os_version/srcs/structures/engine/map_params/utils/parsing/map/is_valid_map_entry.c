/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map_entry.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:15:23 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:17:22 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking if a character is valid on the map. '0' refers to walkable
**	surface, '1' refers to wall, '2' refers to sprite, ' ' refers to a non
**	playable surface and all cardinal points refers to spawn points.
*/

t_bool	is_valid_map_entry(char c)
{
	if (c != '0' && c != '1' && c != '2' &&
	c != ' ' && is_cardinal_point(c) == false)
		return (false);
	return (true);
}
