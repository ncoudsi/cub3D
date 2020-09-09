/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_ray_dir.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:54:26 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 11:54:56 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    set_ray_dir(t_vector *value)
{
    g_engine->rcast_params->ray_dir->x = value->x;
    g_engine->rcast_params->ray_dir->y = value->y;
}
