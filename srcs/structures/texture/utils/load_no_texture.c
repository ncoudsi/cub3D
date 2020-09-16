/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_no_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:24:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 16:21:06 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	load_no_texture()
{
	t_texture	*tmp_texture;
	char		*tmp_texels;
	void		*tmp_ptr;
	int			index;

	index = 0;
	tmp_texture = (t_texture *)no_texture();
	tmp_ptr = mlx_xpm_file_to_image(mlx_ptr(), tmp_texture->path,
	&tmp_texture->dimension->x, &tmp_texture->dimension->y);
	tmp_texture->texels = (char *)malloc(sizeof(char) * tmp_texture->dimension->y * tmp_texture->dimension->x * 4);
	tmp_texels = mlx_get_data_addr(tmp_ptr,
	&tmp_texture->bits_per_texel, &tmp_texture->size_line, &tmp_texture->endian);
	while (index < tmp_texture->dimension->y * tmp_texture->size_line)
	{
		tmp_texture->texels[index] = tmp_texels[index];
		index++;
	}
	mlx_destroy_image(mlx_ptr(), tmp_ptr);
}
