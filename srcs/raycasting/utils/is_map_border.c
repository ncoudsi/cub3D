/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_map_border.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 14:00:40 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 14:56:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_bool	is_map_border(void)
{
	if (map_pos_x() < 0 || map_pos_x() >= map_size_x() ||
		map_pos_y() < 0 || map_pos_y() >= map_size_y())
		return (true);
	return (false);
}
