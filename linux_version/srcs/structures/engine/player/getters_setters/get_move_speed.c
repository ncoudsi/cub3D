/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_move_speed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:54:47 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:16:17 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	move_speed(void)
{
	return (g_engine->player->move_speed);
}
