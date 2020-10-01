/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_relative_sprite_pos_x.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:13:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:14:22 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	relative_sprite_pos_x()
{
	return (g_engine->render_params->sprite_params->relative_sprite_pos->x);
}