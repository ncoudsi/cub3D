/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_hitpoint_x.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:28:45 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:29:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	sprite_hitpoint_x(int sprite_index)
{
	return (g_engine->render_params->sprite_tab->
	sprites[sprite_index].sprite_hitpoint_x);
}
