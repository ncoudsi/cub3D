/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_sprite_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:33:25 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:49:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_sprite_tab(t_sprite_tab to_destroy)
{
	int	index;

	index = 0;
	while (index < to_destroy.tab_size)
	{
		destroy_sprite(to_destroy.sprites[index]);
		index++;
	}
	free(to_destroy.sprites);
	to_destroy.tab_size = 0;
	to_destroy.sprites_on_screen = 0;
	free(to_destroy.sprite_pos_x_tab);
}
