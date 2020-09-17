/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_texture.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:05:05 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 14:23:34 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_TEXTURE_H
# define CUBE_TEXTURE_H


typedef struct	s_texture
{
	void			*text_ptr;
	char			*path;
	t_int_vector	*dimension;
	char			*texels;
	int				text_size_line;
	int				bits_per_texel;
	int				text_endian;
}				t_texture;

/*
**	CREATORS & DESTRUCTORS
*/

t_texture			create_texture(char *path);
void				destroy_texture(t_texture to_destroy);
t_texture			*malloc_texture(char *path);
void				free_texture(t_texture *to_free);

/*
**	GETTERS & SETTERS
*/

void const			*text_ptr(t_texture const *object);
void				set_text_ptr(void *value, t_texture *object);
char const			*path(t_texture const *object);
void				set_path(char *value, t_texture *object);
t_int_vector const	*dimension(t_texture const *object);
int					dimension_x(t_texture const *object);
int					dimension_y(t_texture const *object);
void				set_dimension(t_int_vector *value, t_texture *object);
void				set_dimension_x(int value, t_texture *object);
void				set_dimension_y(int value, t_texture *object);
char const			*texels(t_texture const *object);
void				set_texels(char *value, t_texture *object);
int					text_size_line(t_texture const *object);
void				set_text_size_line(int value, t_texture *object);
int					bits_per_texel(t_texture const *object);
void				set_bits_per_texel(int value, t_texture *object);
int					text_endian(t_texture const *object);
void				set_text_endian(int value, t_texture *object);

#endif
