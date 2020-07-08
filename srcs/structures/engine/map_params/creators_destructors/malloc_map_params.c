/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_map_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:29:58 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:29:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_map_params    *malloc_map_params()
{
    t_map_params    *result;

    result = (t_map_params *)malloc(sizeof(t_map_params));
    if (result == NULL)
        return (NULL);
    *result = create_map_params();
    return (result);
}