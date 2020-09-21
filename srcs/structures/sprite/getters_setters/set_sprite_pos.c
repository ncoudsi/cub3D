/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprite_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:35:23 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:36:32 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_sprite_pos(int sprite_index, t_int_vector *value)
{
	g_engine->render_params->sprite_tab->
	sprites[sprite_index].sprite_pos->x = value->x;
	g_engine->render_params->sprite_tab->
	sprites[sprite_index].sprite_pos->y = value->y;
}
