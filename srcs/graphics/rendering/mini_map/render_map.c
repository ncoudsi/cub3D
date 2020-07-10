/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:29:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/10 10:10:19 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_map()
{
	t_vector	index;

	index = create_vector(0, 0);
	while (g_engine->map_params->map[index.y] != NULL)
	{
		index.x = 0;
		while (g_engine->map_params->map[index.y][index.x] != '\0')
		{
			if (g_engine->map_params->map[index.y][index.x] == '1')
				render_wall(index);
			else if (is_tile(g_engine->map_params->map[index.y][index.x]) == true)
				render_tile(index);
			index.x++;
		}
		index.y++;
	}
}
