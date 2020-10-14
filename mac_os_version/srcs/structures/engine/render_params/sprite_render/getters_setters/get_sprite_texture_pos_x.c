/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_texture_pos_x.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 10:34:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:31:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	sprite_texture_pos_x(void)
{
	return (g_engine->render_params->sprite_params->sprite_texture_pos->x);
}
