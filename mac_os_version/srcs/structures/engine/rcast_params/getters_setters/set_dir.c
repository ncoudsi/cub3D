/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_dir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 12:28:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:28:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_dir(t_vector *value)
{
	g_engine->rcast_params->dir->x = value->x;
	g_engine->rcast_params->dir->y = value->y;
}
