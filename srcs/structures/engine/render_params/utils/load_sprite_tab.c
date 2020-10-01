/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprite_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:34:26 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:40:43 by ncoudsi          ###   ########.fr       */
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
				set_sprite_pos(g_engine->render_params->sprite_params->
				sprite_tab[sprite_index], &pos);
				sprite_index++;
			}
			map_index.x++;
		}
		map_index.y++;
	}
}

void	load_sprite_tab()
{
	int	index;
	int	tab_size;

	index = 0;
	tab_size = sprite_nbr();
	g_engine->render_params->sprite_params->sprite_tab =
	(t_sprite **)malloc(sizeof(t_sprite *) * tab_size);
	if (sprite_tab() == NULL)
		error_exit(MALLOC_ERROR);
	while (index < tab_size)
	{
		set_sprite_tab_index(index, malloc_sprite());
		index++;
	}
	load_sprite_tab_pos();
	set_sprite_tab_dist();
	sort_sprite_tab();
}