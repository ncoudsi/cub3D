/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_texture.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:05:05 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/14 15:39:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_TEXTURE_H
# define CUBE_TEXTURE_H


typedef struct	s_texture
{
	char			*path;
	t_int_vector	*dimension;
	char			*texels;
	int				size_line;
	int				bits_per_texel;
	int				endian;
}				t_texture;

void		load_textures();
void		load_no_texture();
void		load_so_texture();
void		load_ea_texture();
void		load_we_texture();
void		load_sprite_texture();

/*
**	CREATORS & DESTRUCTORS
*/

t_texture	create_texture(char *path);
void		destroy_texture(t_texture to_destroy);
t_texture	*malloc_texture(char *path);
void		free_texture(t_texture *to_free);

#endif
