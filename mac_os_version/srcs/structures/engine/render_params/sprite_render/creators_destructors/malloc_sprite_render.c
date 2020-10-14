/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_sprite_render.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:20:35 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:28:37 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite_render	*malloc_sprite_render(void)
{
	t_sprite_render	*result;

	result = (t_sprite_render *)malloc(sizeof(t_sprite_render));
	*result = create_sprite_render();
	return (result);
}
