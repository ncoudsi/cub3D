/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:31:26 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:31:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector    *malloc_vector(int x, int y)
{
    t_vector    *result;

    result = (t_vector *)malloc(sizeof(t_vector));
    if (result == NULL)
        return (NULL);
    *result = create_vector(x, y);
    return (result);
}