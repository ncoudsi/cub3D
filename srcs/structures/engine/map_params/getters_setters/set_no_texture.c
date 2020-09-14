/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_no_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:29:18 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/14 14:30:05 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_no_texture(t_texture *value)
{
	g_engine->map_params->no_texture = value;
}
