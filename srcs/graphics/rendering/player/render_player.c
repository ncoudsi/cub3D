/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:19:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/14 14:24:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	render_player()
{
	t_vector	*player_pos;

	player_pos = pos();
	draw_circle(*player_pos, PLAYER_SIZE, create_color(PLAYER_COLOR));
}
