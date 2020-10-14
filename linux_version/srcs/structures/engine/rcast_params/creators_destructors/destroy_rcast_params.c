/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_rcast_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:09:21 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 15:48:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_rcast_params(t_rcast_params to_destroy)
{
	if (dir() != NULL)
		free_vector(to_destroy.dir);
	if (plane() != NULL)
		free_vector(to_destroy.plane);
	if (ray_dir() != NULL)
		free_vector(to_destroy.ray_dir);
	if (map_pos() != NULL)
		free_int_vector(to_destroy.map_pos);
	if (step() != NULL)
		free_int_vector(to_destroy.step);
	if (side_dist() != NULL)
		free_vector(to_destroy.side_dist);
	if (delta_dist() != NULL)
		free_vector(to_destroy.delta_dist);
	if (perp_wall_dist_tab() != NULL)
		free(to_destroy.perp_wall_dist_tab);
	if (side_tab() != NULL)
		free(to_destroy.side_tab);
}
