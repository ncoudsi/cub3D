/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_texture_pos.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 10:42:04 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:36:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_int_vector const	*sprite_texture_pos(void)
{
	return (g_engine->render_params->sprite_params->sprite_texture_pos);
}
