/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:12:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 10:28:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Note that mlx_destroy_image() is supposed to free both text_ptr and texels
**	here. So we dont check for texels afterwards or we are on a SEGV case.
*/

void	destroy_texture(t_texture to_destroy)
{
	if (text_ptr(&to_destroy) != NULL)
		mlx_destroy_image(mlx_ptr(), to_destroy.text_ptr);
	if (path(&to_destroy) != NULL)
		free(to_destroy.path);
	if (dimension(&to_destroy) != NULL)
		free_int_vector(to_destroy.dimension);
}
