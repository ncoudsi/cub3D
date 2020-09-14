/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:14:50 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/14 13:16:06 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_texture	*malloc_texture(char *path)
{
	t_texture	*result;

	result = (t_texture *)malloc(sizeof(t_texture));
	if (result == NULL)
		return (NULL);
	*result = create_texture(path);
	return (result);
}
