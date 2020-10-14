/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_wall_bottom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 13:55:37 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:51:17 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_wall_bottom(int value)
{
	g_engine->render_params->texture_params->wall_bottom = value;
}
