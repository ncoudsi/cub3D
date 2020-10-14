/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_absolute_sprite_pos_y.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:08:34 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:34:30 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	absolute_sprite_pos_y(void)
{
	return (g_engine->render_params->sprite_params->absolute_sprite_pos->y);
}
