/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprite_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:22:45 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:30:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_sprite_pos(t_sprite *object, t_vector *value)
{
	object->sprite_pos->x = value->x;
	object->sprite_pos->y = value->y;
}
