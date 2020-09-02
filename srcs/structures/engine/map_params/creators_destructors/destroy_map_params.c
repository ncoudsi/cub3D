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
    free_vector(to_destroy.resolution);
    free(to_destroy.no_textures);
    free(to_destroy.so_textures);
    free(to_destroy.we_textures);
    free(to_destroy.ea_textures);
    free(to_destroy.sprite_textures);
    free_color(to_destroy.ceiling_colors);
    free_color(to_destroy.floor_colors);
    ft_free_tab((void **)to_destroy.map);
    free_vector(to_destroy.map_size);
}