/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_absolute_sprite_pos_x.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:07:38 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:29:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	absolute_sprite_pos_x(void)
{
	return (g_engine->render_params->sprite_params->absolute_sprite_pos->x);
}
