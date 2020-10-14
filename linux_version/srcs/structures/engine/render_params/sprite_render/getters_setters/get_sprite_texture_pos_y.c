/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_texture_pos_y.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 10:39:50 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:33:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	sprite_texture_pos_y(void)
{
	return (g_engine->render_params->sprite_params->sprite_texture_pos->y);
}
