/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_sprite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:07:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:29:52 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite	*malloc_sprite(void)
{
	t_sprite	*result;

	result = (t_sprite *)malloc(sizeof(t_sprite));
	if (result == NULL)
		return (NULL);
	*result = create_sprite();
	return (result);
}
