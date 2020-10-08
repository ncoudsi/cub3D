/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_map_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 07:48:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 07:49:33 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_map_params	*malloc_map_params(void)
{
	t_map_params	*result;

	result = (t_map_params *)malloc(sizeof(t_map_params));
	if (result == NULL)
		return (NULL);
	*result = create_map_params();
	return (result);
}
