/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_rcast_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:07:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 11:09:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_rcast_params  *malloc_rcast_params()
{
    t_rcast_params  *result;

    result = (t_rcast_params *)malloc(sizeof(t_rcast_params));
    if (result == NULL)
        return (NULL);
    *result = create_rcast_params();
    return (result);
}