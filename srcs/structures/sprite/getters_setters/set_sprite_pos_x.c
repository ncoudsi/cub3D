/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprite_pos_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:36:43 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:37:16 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_sprite_pos_x(int sprite_index, int value)
{
	g_engine->render_params->sprite_tab->
	sprites[sprite_index].sprite_pos->x = value;
}
