/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_no_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:10:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 08:10:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_no_texture(t_texture *value)
{
	g_engine->map_params->no_texture = value;
}
