/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_dir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:30:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 11:31:31 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    set_dir(t_vector *value)
{
    g_engine->rcast_params->dir->x = value->x;
    g_engine->rcast_params->dir->y = value->y;
}
