/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_fvector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:44:56 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 14:46:17 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_fvector	*malloc_fvector(float x, float y)
{
	t_fvector	*result;

	result = (t_fvector *)malloc(sizeof(t_fvector));
	if (result == NULL)
		return (NULL);
	*result = create_fvector(x, y);
	return (result);
}
