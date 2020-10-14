/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_perp_wall_dist_tab_index.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 15:06:45 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/10 15:09:17 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	perp_wall_dist_tab_index(int index_value)
{
	return (g_engine->rcast_params->perp_wall_dist_tab[index_value]);
}
