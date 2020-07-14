/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:10:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/14 11:43:01 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_player	create_player()
{
	t_player	result;

	result.pos = NULL;
	result.forward = NULL;
	result.right = NULL;
	result.color = malloc_color(PLAYER_COLOR);
	return (result);
}
