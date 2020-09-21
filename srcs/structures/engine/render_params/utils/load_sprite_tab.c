/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprite_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:56:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:53:00 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	load_sprite_tab_size()
{
	t_int_vector	index;
	char const		**file_map;

	index = create_int_vector(0, 0);
	file_map = map();
		while (index.y < resolution_y())
	{
		index.x = 0;
		while (index.x < resolution_x())
		{
			if (file_map[index.y][index.x] == '2')
				set_tab_size(tab_size() + 1);
			index.x++;
		}
		index.y++;
	}
}

void	load_sprite_tab()
{
	int	index;

	index = 0;
	load_sprite_tab_size();
	g_engine->render_params->sprite_tab->sprites = (t_sprite *)malloc(sizeof(t_sprite) * tab_size());
	if (sprites() == NULL)
		error_exit(MALLOC_ERROR);
	while (index < tab_size())
	{
		g_engine->render_params->sprite_tab->sprites[index] = create_sprite();
		index++;
	}
	g_engine->render_params->sprite_tab->sprite_pos_x_tab = (int *)malloc(sizeof(int) * resolution_x());
	if (sprite_pos_x_tab() == NULL)
		error_exit(MALLOC_ERROR);
}

