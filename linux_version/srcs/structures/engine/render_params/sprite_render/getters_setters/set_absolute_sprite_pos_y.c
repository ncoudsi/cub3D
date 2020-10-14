/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_absolute_sprite_pos_y.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:09:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:32:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_absolute_sprite_pos_y(float value)
{
	g_engine->render_params->sprite_params->absolute_sprite_pos->y = value;
}
