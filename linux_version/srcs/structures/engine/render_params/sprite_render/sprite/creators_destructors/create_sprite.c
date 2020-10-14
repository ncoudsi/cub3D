/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sprite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:42:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:28:13 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite	create_sprite(void)
{
	t_sprite	result;

	result.sprite_pos = malloc_vector(0, 0);
	result.sprite_dist = 0.0f;
	return (result);
}
