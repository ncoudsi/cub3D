/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_so_textures.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:31:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/14 12:33:35 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_so_textures(char *value)
{
	g_engine->map_params->so_textures = value;
}