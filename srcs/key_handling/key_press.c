/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:05:27 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/05 12:47:39 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int key_press(int key)
{
  if (key == ESC_KEY)
		exit(0);
	if (is_movement_key(key) == true || is_rotation_key(key) == true)
		set_moves(key);
  return (key);
}
