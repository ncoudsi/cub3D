/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_text_render.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:35:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:23:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_text_render	create_text_render(void)
{
	t_text_render	result;

	result.wall_height = 0;
	result.wall_bottom = 0;
	result.wall_top = 0;
	result.wall_hitpoint_x = 0;
	result.texture_pos = malloc_int_vector(0, 0);
	result.texture_pos_x_tab = NULL;
	result.texture_step = 0.0f;
	return (result);
}
