/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_relative_sprite_pos_y.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:15:34 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:32:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_relative_sprite_pos_y(float value)
{
	g_engine->render_params->sprite_params->relative_sprite_pos->y = value;
}
