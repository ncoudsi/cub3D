/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_relative_sprite_pos_x.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:15:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:15:22 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_relative_sprite_pos_x(float value)
{
	g_engine->render_params->sprite_params->relative_sprite_pos->x = value;
}