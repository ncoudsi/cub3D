/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_engine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:04:32 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 12:05:36 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_engine	*malloc_engine()
{
	t_engine	*result;

	result = (t_engine *)malloc(sizeof(t_engine));
	if (result == NULL)
		return (NULL);
	*result = create_engine();
	return (result);
}
