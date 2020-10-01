/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprite_tab_dist.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:50:29 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 16:16:39 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_sprite_tab_dist()
{
	int				sprite_index;
	t_vector		pos;
	t_sprite		**tab;
	float			dist;

	sprite_index = 0;
	tab = (t_sprite **)sprite_tab();
	while (sprite_index < sprite_nbr())
	{
		pos = create_vector(sprite_pos_x(tab[sprite_index]),
		sprite_pos_y(tab[sprite_index]));
		dist = (pos_x() - pos.x) * (pos_x() - pos.x) +
		(pos_y() - pos.y) * (pos_y() - pos.y);
		set_sprite_dist(tab[sprite_index], dist);
		sprite_index++;
	}
}
