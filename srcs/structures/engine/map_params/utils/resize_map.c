/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:33:52 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/11 11:27:36 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static char	**alloc_new_map()
{
	char			**result;
	t_int_vector	index;

	index = create_int_vector(0, 0);
	result = (char **)ft_tab_new(map_size_y());
	if (result == NULL)
		error_exit(MALLOC_ERROR);
	while (index.y < map_size_y())
	{
		result[index.y] = ft_strnew(map_size_x());
		index.y++;
	}
	return (result);
}
void		resize_map()
{
	char			**new_map;
	t_int_vector	index;

	new_map = alloc_new_map();
	index.y = 0;
	while(index.y < map_size_y())
	{
		index.x = 0;
		while (g_engine->map_params->map[index.y][index.x] != '\0')
		{
			new_map[index.y][index.x] = g_engine->map_params->map[index.y][index.x];
			index.x++;
		}
		while (index.x < map_size_x())
		{
			new_map[index.y][index.x] = ' ';
			index.x++;
		}
		index.y++;
	}
	ft_free_tab((void **)g_engine->map_params->map);
	set_map(new_map);
}
