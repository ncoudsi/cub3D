/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:12:27 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 15:46:19 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_player(t_player to_destroy)
{
	if (pos() != NULL)
		free_vector(to_destroy.pos);
	if (forward() != NULL)
		free_vector(to_destroy.forward);
	if (right() != NULL)
		free_vector(to_destroy.right);
	if (moves() != NULL)
		free_moves(to_destroy.moves);
}
