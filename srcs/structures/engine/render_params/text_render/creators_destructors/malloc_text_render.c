/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_text_render.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:46:28 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:47:31 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_text_render	*malloc_text_render()
{
	t_text_render	*result;

	result = (t_text_render *)malloc(sizeof(t_text_render));
	if (result == NULL)
		return (NULL);
	*result = create_text_render();
	return (result);
}