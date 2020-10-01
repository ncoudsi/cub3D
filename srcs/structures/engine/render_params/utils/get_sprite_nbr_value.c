/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_nbr_value.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:33:45 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:36:37 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	get_sprite_nbr_value()
{
	int				result;
	char			**tmp_map;
	t_int_vector	map_index;
	t_int_vector	map_size;

	result = 0;
	tmp_map = (char **)map();
	map_index = create_int_vector(0, 0);
	map_size = create_int_vector(map_size_x(), map_size_y());
	while (map_index.y < map_size.y)
	{
		map_index.x = 0;
		while (map_index.x < map_size.x)
		{
			if (tmp_map[map_index.y][map_index.x] == '2')
				result++;
			map_index.x++;
		}
		map_index.y++;
	}
	return (result);
}