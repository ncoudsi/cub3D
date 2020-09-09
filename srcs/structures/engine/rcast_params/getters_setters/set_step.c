/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_step.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:17:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 16:00:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_step(t_int_vector *value)
{
	g_engine->rcast_params->step->x = value->x;
	g_engine->rcast_params->step->y = value->y;
}
