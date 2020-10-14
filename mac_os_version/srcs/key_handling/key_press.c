/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:52:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 09:40:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Setting variables according to pressed keys.
*/

int	key_press(int key)
{
	if (key == ESC_KEY)
		close_game();
	if (is_movement_key(key) == true || is_rotation_key(key) == true)
		set_moves(key);
	printf("%d\n", key);
	return (key);
}
