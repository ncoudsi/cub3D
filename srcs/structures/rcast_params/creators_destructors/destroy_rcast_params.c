/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_rcast_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:09:21 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 11:10:30 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    destroy_rcast_params(t_rcast_params to_destroy)
{
    free_vector(to_destroy.pos);
    free_vector(to_destroy.dir);
    free_vector(to_destroy.plane);
    free_vector(to_destroy.ray_dir);
}