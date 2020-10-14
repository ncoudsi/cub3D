/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_we_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:11:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 08:11:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_we_texture(t_texture *value)
{
	g_engine->map_params->we_texture = value;
}
