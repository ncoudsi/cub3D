/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_right.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:21:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 09:56:37 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_right(t_vector *value)
{
	g_engine->player->right->x = value->x;
	g_engine->player->right->y = value->y;
}
