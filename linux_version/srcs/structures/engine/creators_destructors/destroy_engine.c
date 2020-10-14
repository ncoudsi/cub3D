/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_engine.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:05:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 15:36:02 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_engine(void)
{
	if (map_params() != NULL)
		free_map_params(g_engine->map_params);
	if (mlx_params() != NULL)
		free_mlx_params(g_engine->mlx_params);
	if (player() != NULL)
		free_player(g_engine->player);
	if (rcast_params() != NULL)
		free_rcast_params(g_engine->rcast_params);
	if (render_params() != NULL)
		free_render_params(g_engine->render_params);
}
