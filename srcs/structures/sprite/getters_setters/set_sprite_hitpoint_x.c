/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprite_hitpoint_x.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:30:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:30:56 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_sprite_hitpoint_x(int sprite_index, float value)
{
	g_engine->render_params->sprite_tab->
	sprites[sprite_index].sprite_hitpoint_x = value;
}
