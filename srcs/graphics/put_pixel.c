/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:23:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 12:25:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	put_pixel(t_vector pos, t_color color)
{
	int	pixel_index;

	pixel_index = get_pixel_index(pos);
	g_engine->mlx_params->pixels[pixel_index + RED_INDEX] = color.r;
	g_engine->mlx_params->pixels[pixel_index + GREEN_INDEX] = color.g;
	g_engine->mlx_params->pixels[pixel_index + BLUE_INDEX] = color.b;
}
