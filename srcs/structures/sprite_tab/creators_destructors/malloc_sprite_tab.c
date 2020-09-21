/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_sprite_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:42:23 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:49:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite_tab	*malloc_sprite_tab()
{
	t_sprite_tab	*result;

	result = (t_sprite_tab *)malloc(sizeof(t_sprite_tab));
	if (result == NULL)
		return (NULL);
	*result = create_sprite_tab();
	return (result);
}
