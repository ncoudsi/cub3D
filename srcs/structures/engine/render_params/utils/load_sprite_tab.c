/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprite_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:34:26 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 16:11:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

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
	set_sprite_tab_pos();
	set_sprite_tab_dist();
	sort_sprite_tab();
}