/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:12:27 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/31 14:09:23 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_player(t_player to_destroy)
{
	free_vector(to_destroy.pos);
	free_vector(to_destroy.forward);
	free_vector(to_destroy.right);
	free_moves(to_destroy.moves);
}
