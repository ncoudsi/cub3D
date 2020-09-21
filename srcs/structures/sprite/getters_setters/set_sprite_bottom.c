/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprite_bottom.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:24:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:25:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_sprite_bottom(int sprite_index, int value)
{
	g_engine->render_params->sprite_tab->
	sprites[sprite_index].sprite_bottom = value;
}
