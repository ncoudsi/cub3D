/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_we_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:31:34 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/14 14:29:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_we_texture(t_texture *value)
{
	g_engine->map_params->we_texture = value;
}
