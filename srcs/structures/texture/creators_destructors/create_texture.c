/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:10:20 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/14 13:34:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_texture	create_texture(char	*path)
{
	t_texture	result;

	result.path = ft_strdup(path);
	result.dimension = NULL;
	result.texels = NULL;
	result.size_line = 0;
	result.chars_per_texel = 0;
	return (result);
}
