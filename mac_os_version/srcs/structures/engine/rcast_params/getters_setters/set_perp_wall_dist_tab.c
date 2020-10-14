/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_perp_wall_dist_tab.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:31:50 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/10 14:32:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_perp_wall_dist_tab(int index, float value)
{
	g_engine->rcast_params->perp_wall_dist_tab[index] = value;
}
