/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_rcast_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:09:21 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 15:07:54 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    destroy_rcast_params(t_rcast_params to_destroy)
{
    free_vector(to_destroy.dir);
    free_vector(to_destroy.plane);
    free_vector(to_destroy.ray_dir);
	free_int_vector(to_destroy.map_pos);
	free_int_vector(to_destroy.step);
	free_vector(to_destroy.side_dist);
	free_vector(to_destroy.delta_dist);
}
