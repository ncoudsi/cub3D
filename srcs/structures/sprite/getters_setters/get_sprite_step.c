/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_step.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:38:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:38:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	sprite_step(int sprite_index)
{
	return (g_engine->render_params->sprite_tab->
	sprites[sprite_index].sprite_step);
}
