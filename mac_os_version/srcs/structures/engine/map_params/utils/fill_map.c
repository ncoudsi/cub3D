/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:13:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:15:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Fill the map array with all the parsed map lines.
*/

void	fill_map(char *map_line)
{
	char	*tmp;

	tmp = ft_strdup(map_line);
	ft_add_to_tab((void *)tmp, (void ***)map_adr());
}
