/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sprite_render.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:09:28 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:28:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite_render	create_sprite_render(void)
{
	t_sprite_render	result;

	result.sprite_nbr = 0;
	result.sprite_tab = NULL;
	result.absolute_sprite_pos = NULL;
	result.relative_sprite_pos = NULL;
	result.inverted_matrix = 0.0f;
	result.transformed_pos = NULL;
	result.sprite_screen_x = 0;
	result.sprite_height = 0;
	result.sprite_top = 0;
	result.sprite_bottom = 0;
	result.sprite_width = 0;
	result.sprite_left = 0;
	result.sprite_right = 0;
	result.sprite_texture_pos = NULL;
	return (result);
}
