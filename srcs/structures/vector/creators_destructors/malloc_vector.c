/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 13:55:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 13:56:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector	*malloc_vector(float x, float y)
{
	t_vector	*result;

	result = (t_vector *)malloc(sizeof(t_vector));
	if (result == NULL)
		return (NULL);
	*result = create_vector(x, y);
	return (result);
}
