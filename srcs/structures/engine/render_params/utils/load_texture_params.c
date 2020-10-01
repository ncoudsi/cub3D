/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_texture_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:31:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:31:43 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	load_texture_params(void)
{
	g_engine->render_params->texture_params->texture_pos_x_tab =
	(int *)malloc(sizeof(int) * resolution_x());
}