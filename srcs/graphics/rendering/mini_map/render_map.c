/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:29:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/14 14:37:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_map()
{
	t_vector	index;
	char		**file_map;

	index = create_vector(0, 0);
	file_map = map();
	while (file_map[(int)index.y] != NULL)
	{
		index.x = 0;
		while (file_map[(int)index.y][(int)index.x] != '\0')
		{
			if (file_map[(int)index.y][(int)index.x] == '1')
				render_wall(index);
			else if (is_tile(file_map[(int)index.y][(int)index.x]) == true)
				render_tile(index);
			index.x++;
		}
		index.y++;
	}
}
