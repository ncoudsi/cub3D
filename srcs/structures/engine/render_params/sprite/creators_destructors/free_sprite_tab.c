/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_sprite_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:37:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/28 11:52:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	free_sprite_tab(t_sprite **to_free, int tab_size)
{
	int	index;

	index = 0;
	while (index < tab_size)
	{
		free_sprite(to_free[index]);
		index++;
	}
}