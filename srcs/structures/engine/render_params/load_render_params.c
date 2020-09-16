/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_render_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:42:35 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 14:51:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	load_render_params()
{
	g_engine->render_params->texture_pos_x_tab =
	(int *)malloc(sizeof(int) * resolution_x());
}
