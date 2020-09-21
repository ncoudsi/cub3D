/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sprite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:17:52 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 15:43:21 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite	create_sprite()
{
	t_sprite	result;

	result.sprite_height = 0;
	result.sprite_bottom = 0;
	result.sprite_top = 0;
	result.sprite_hitpoint_x = 0.0f;
	result.sprite_pos = malloc_int_vector(0, 0);
	result.sprite_step = 0.0f;
	return (result);
}
