/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_drawable_sprite_pixel.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 09:23:10 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 09:25:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_bool	is_drawable_sprite_pixel(t_int_vector sprite_pixel_index)
{
	if (transformed_pos_y() > 0 && sprite_pixel_index.x > 0 &&
	sprite_pixel_index.x < resolution_x() && transformed_pos_y() <
	perp_wall_dist_tab_index(sprite_pixel_index.x))
		return (true);
	return (false);
}