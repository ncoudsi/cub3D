/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_minimap_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:30:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/10 09:48:10 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector	get_minimap_tiles_nbr()
{
	t_vector	result;
	int			index;
	int			tmp;

	result.x = 0;
	index = 0;
	while (g_engine->map_params->map[index] != NULL)
	{
		tmp = ft_strlen(g_engine->map_params->map[index]);
		if (tmp > result.x)
			result.x = tmp;
		index++;
	}
	result.y = index;
	return (result);
}
