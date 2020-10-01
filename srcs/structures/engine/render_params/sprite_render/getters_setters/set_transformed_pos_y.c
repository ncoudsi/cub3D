/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_transformed_pos_y.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:19:51 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:25:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_transformed_pos_y(float value)
{
	g_engine->render_params->sprite_params->transformed_pos->y = value;
}