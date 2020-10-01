/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_relative_sprite_pos_y.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:14:33 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:14:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	relative_sprite_pos_y()
{
	return (g_engine->render_params->sprite_params->relative_sprite_pos->y);
}