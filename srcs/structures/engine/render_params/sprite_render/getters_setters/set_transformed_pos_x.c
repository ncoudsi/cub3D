/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_transformed_pos_x.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:19:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:19:37 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void set_tranformed_pos_x(float value)
{
	g_engine->render_params->sprite_params->transformed_pos->x = value;
}