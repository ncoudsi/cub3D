/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_engine.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:05:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 21:14:02 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_engine(t_engine to_destroy)
{
	free_map_params(to_destroy.map_params);
	// free_mlx_params(to_destroy.mlx_params);
	free_player(to_destroy.player);
}
