/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:10:20 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 13:49:31 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_texture	create_texture(char *path)
{
	t_texture	result;

	result.text_ptr = NULL;
	result.path = ft_strdup(path);
	result.dimension = malloc_int_vector(0, 0);
	result.texels = NULL;
	result.text_size_line = 0;
	result.bits_per_texel = 0;
	result.text_endian = 0;
	return (result);
}
