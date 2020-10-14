/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_wall_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:27:16 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:51:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_wall_height(int value)
{
	g_engine->render_params->texture_params->wall_height = value;
}
