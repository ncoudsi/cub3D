/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_render_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:42:35 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:52:02 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static int	load_sprite_nbr()
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

static void	load_sprite_tab()
{
	int	index;
	int	tab_size;

	index = 0;
	tab_size = sprite_nbr();
	g_engine->render_params->sprite_tab =
	(t_sprite **)malloc(sizeof(t_sprite *) * tab_size);
	if (sprite_tab() == NULL)
		error_exit(MALLOC_ERROR);
	while (index < tab_size)
	{
		set_sprite_tab_index(index, malloc_sprite());
		index++;
	}
}

void		load_render_params()
{
	g_engine->render_params->texture_params->texture_pos_x_tab =
	(int *)malloc(sizeof(int) * resolution_x());
	set_sprite_nbr(load_sprite_nbr());
	load_sprite_tab();
}
