/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprite_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:32:37 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 16:42:29 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	First, counting all the sprites on the map. Then loading the array
**	containing all the sprites. Afterwards, allocating memory for all the
**	sprite rendering related variables.
*/

void	load_sprite_params(void)
{
	set_sprite_nbr(get_sprite_nbr_value());
	load_sprite_tab();
	g_engine->render_params->sprite_params->absolute_sprite_pos =
	malloc_vector(0.0f, 0.0f);
	g_engine->render_params->sprite_params->relative_sprite_pos =
	malloc_vector(0.0f, 0.0f);
	g_engine->render_params->sprite_params->transformed_pos =
	malloc_vector(0.0f, 0.0f);
	g_engine->render_params->sprite_params->sprite_texture_pos =
	malloc_int_vector(0, 0);
}
