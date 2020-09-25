/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_map_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:29:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:29:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    destroy_map_params(t_map_params to_destroy)
{
    free_int_vector(to_destroy.resolution);
    free(to_destroy.no_texture);
    free(to_destroy.so_texture);
    free(to_destroy.we_texture);
    free(to_destroy.ea_texture);
    free(to_destroy.sprite_texture);
    free_color(to_destroy.ceiling_color);
    free_color(to_destroy.floor_color);
    ft_free_tab((void **)to_destroy.map);
    free_int_vector(to_destroy.map_size);
}
