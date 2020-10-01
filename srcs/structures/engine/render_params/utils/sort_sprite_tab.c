/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_sprite_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:03:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 16:18:23 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"
static t_bool	is_sorted(t_sprite **tab)
{
	int			sprite_index;
	int			tab_size;

	sprite_index = 0;
	tab_size = sprite_nbr();
	while (sprite_index < tab_size - 1)
	{
		if (tab[sprite_index]->sprite_dist < tab[sprite_index + 1]->sprite_dist)
			return (false);
		sprite_index++;
	}
	return (true);
}

static void		swap_sprite(t_sprite **sprite1, t_sprite **sprite2)
{
	t_sprite	*tmp;

	tmp = *sprite1;
	*sprite1 = *sprite2;
	*sprite2 = tmp;
}

void			sort_sprite_tab()
{
	int				sprite_index;
	int				tab_size;
	t_sprite		**tab;

	tab_size = sprite_nbr();
	tab = (t_sprite **)sprite_tab();
	while (is_sorted(tab) == false)
	{
		sprite_index = 0;
		while (sprite_index < tab_size - 1)
		{
			if (tab[sprite_index]->sprite_dist < tab[sprite_index + 1]->sprite_dist)
				swap_sprite(&tab[sprite_index], &tab[sprite_index + 1]);
			sprite_index++;
		}
	}
}