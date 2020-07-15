/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:12:27 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/15 11:38:05 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_player(t_player to_destroy)
{
	free_vector(to_destroy.pos);
	free_vector(to_destroy.forward);
	free_vector(to_destroy.right);
}
