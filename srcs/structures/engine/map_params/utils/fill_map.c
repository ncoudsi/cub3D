/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:30:54 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:30:54 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    fill_map(char *map_line, t_map_params *to_fill)
{
    char    *tmp;

    tmp = ft_strdup(map_line);
    ft_add_to_tab((void *)tmp, (void ***)&(to_fill->map));
}