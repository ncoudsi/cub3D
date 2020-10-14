/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_absolute_sprite_pos_x.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:09:05 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:36:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_absolute_sprite_pos_x(float value)
{
	g_engine->render_params->sprite_params->absolute_sprite_pos->x = value;
}
