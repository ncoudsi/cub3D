/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_so_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:07:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 08:07:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_so_texture(t_texture *value)
{
	g_engine->map_params->so_texture = value;
}
