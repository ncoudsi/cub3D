/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sprite_render.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:09:28 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 15:33:10 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite_render	create_sprite_render()
{
	t_sprite_render	result;

	result.sprite_nbr = 0;
	result.sprite_tab = NULL;
	return (result);
}