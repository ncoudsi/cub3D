/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:52:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 14:53:05 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	key_press(int key)
{
	if (key == ESC_KEY)
		exit(EXIT_SUCCESS);
	if (is_movement_key(key) == true || is_rotation_key(key) == true)
		set_moves(key);
	return (key);
}
