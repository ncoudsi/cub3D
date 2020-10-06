/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:00:05 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/06 15:43:36 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	update_game(void)
{
	update_player();
	raycasting();
	rendering();
	// if (bmp_save() == true)
	// 	create_bmp();
	return (0);
}
