/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_map_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 07:48:18 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 15:39:16 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_map_params(t_map_params to_destroy)
{
	if (resolution() != NULL)
		free_int_vector(to_destroy.resolution);
	if (no_texture() != NULL)
		free(to_destroy.no_texture);
	if (so_texture() != NULL)
		free(to_destroy.so_texture);
	if (we_texture() != NULL)
		free(to_destroy.we_texture);
	if (ea_texture() != NULL)
		free(to_destroy.ea_texture);
	if (sprite_texture() != NULL)
		free(to_destroy.sprite_texture);
	if (ceiling_color() != NULL)
		free_color(to_destroy.ceiling_color);
	if (floor_color() != NULL)
		free_color(to_destroy.floor_color);
	if (map() != NULL)
		ft_free_tab((void **)to_destroy.map);
	if (map_size() != NULL)
		free_int_vector(to_destroy.map_size);
}
