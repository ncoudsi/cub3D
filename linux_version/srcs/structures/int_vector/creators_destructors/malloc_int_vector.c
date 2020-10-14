/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_int_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 14:50:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 14:51:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_int_vector	*malloc_int_vector(int x, int y)
{
	t_int_vector	*result;

	result = (t_int_vector *)malloc(sizeof(t_int_vector));
	if (result == NULL)
		return (NULL);
	*result = create_int_vector(x, y);
	return (result);
}
