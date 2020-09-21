/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_sprite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:22:36 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 14:23:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite	*malloc_sprite()
{
	t_sprite	*result;

	result = (t_sprite *)malloc(sizeof(t_sprite));
	if (result == NULL)
		return (NULL);
	*result = create_sprite();
	return (result);
}
