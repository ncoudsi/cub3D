/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:04:05 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/31 14:05:32 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_moves *malloc_moves()
{
    t_moves *result;

    result = (t_moves *)malloc(sizeof(t_moves));
    if (result == NULL)
        return (NULL);
    *result = create_moves();
    return (result);
}