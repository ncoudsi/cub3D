/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_map_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:24:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 08:08:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_map_size(t_int_vector *value)
{
	g_engine->map_params->map_size->x = value->x;
	g_engine->map_params->map_size->y = value->y;
}
