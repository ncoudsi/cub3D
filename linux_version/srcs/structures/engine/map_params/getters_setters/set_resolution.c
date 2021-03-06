/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_resolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:29:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/25 14:11:35 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_resolution(t_int_vector *value)
{
	g_engine->map_params->resolution->x = value->x;
	g_engine->map_params->resolution->y = value->y;
}
