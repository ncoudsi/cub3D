/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_minimap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:47:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 14:47:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_minimap(void)
{
	t_int_vector	index;
	char const		**file_map;

	index = create_int_vector(0, 0);
	file_map = map();
	while (file_map[index.y] != NULL)
	{
		index.x = 0;
		while (file_map[index.y][index.x] != '\0')
		{
			if (file_map[index.y][index.x] == '1')
				render_minimap_wall(index);
			else if (is_tile(file_map[index.y][index.x]) == true)
				render_minimap_tile(index);
			index.x++;
		}
		index.y++;
	}
	render_minimap_player();
}
