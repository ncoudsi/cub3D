/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_delta_dist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:27:04 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 16:01:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_delta_dist(t_vector *value)
{
	g_engine->rcast_params->delta_dist->x = value->x;
	g_engine->rcast_params->delta_dist->y = value->y;
}
