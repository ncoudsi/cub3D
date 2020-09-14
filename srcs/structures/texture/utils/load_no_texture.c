/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_no_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:24:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/14 15:47:52 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	load_no_texture()
{
	t_texture	*tmp_texture;
	void		*tmp_ptr;

	tmp_texture = (t_texture *)no_texture();
	tmp_ptr = mlx_xpm_file_to_image(mlx_ptr(), tmp_texture->path,
	&tmp_texture->dimension->x, &tmp_texture->dimension->y);
	tmp_texture->texels = ft_strdup(mlx_get_data_addr(tmp_ptr,
	&tmp_texture->bits_per_texel, &tmp_texture->size_line, &tmp_texture->endian));
	mlx_destroy_image(mlx_ptr(), tmp_ptr);
}
