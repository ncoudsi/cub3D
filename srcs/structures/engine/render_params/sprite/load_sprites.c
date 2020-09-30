/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 09:52:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 11:35:52 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	load_sprite_tab_pos(void)
{
	int				sprite_index;
	char			**tmp_map;
	t_int_vector	map_index;
	t_vector		pos;

	sprite_index = 0;
	tmp_map = (char **)map();
	map_index = create_int_vector(0, 0);
	pos = create_vector(0, 0);
	while (map_index.y < map_size_y())
	{
		map_index.x = 0;
		while (map_index.x < map_size_x())
		{
			if (tmp_map[map_index.y][map_index.x] == '2')
			{
				pos = create_vector(map_index.x + 0.5f, map_index.y + 0.5f);
				set_sprite_pos(g_engine->render_params->
				sprite_tab[sprite_index], &pos);
				sprite_index++;
			}
			map_index.x++;
		}
		map_index.y++;
	}
}

void	load_sprites(void)
{
	load_sprite_tab_pos();
	set_sprite_tab_dist();
	sort_sprite_tab();
}