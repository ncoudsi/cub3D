/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sprite_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:28:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:48:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite_tab	create_sprite_tab()
{
	t_sprite_tab	result;

	result.sprites = NULL;
	result.tab_size = 0;
	result.sprites_on_screen = 0;
	result.sprite_pos_x_tab = NULL;
	return (result);
}
