/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_delta_dist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:27:04 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 15:27:37 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_delta_dist(t_vector *value)
{
	g_engine->rcast_params->delta_dist = value;
}
