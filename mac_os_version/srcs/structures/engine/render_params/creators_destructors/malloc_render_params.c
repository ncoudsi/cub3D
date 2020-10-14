/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_render_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:07:18 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:39:01 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_render_params	*malloc_render_params(void)
{
	t_render_params	*result;

	result = (t_render_params *)malloc(sizeof(t_render_params));
	if (result == NULL)
		return (NULL);
	*result = create_render_params();
	return (result);
}
