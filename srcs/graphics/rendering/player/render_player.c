/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:19:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/14 15:51:52 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_player()
{
	t_vector	center;

	center = create_vector(pos_x(), pos_y());
	draw_circle(center, PLAYER_SIZE, create_color(PLAYER_COLOR));
}
