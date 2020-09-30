/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_sprite.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:34:57 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 14:27:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_SPRITE_H
# define CUBE_SPRITE_H

typedef struct	s_sprite
{
	t_vector	*sprite_pos;
	float		sprite_dist;
}				t_sprite;

/*
**	CREATORS & DESTRUCTORS
*/

t_sprite		create_sprite();
void			destroy_sprite(t_sprite to_destroy);
t_sprite		*malloc_sprite();
void			free_sprite(t_sprite *to_free);
void			free_sprite_tab(t_sprite **to_free, int tab_size);

/*
**	GETTERS & SETTERS
*/

t_vector const	*sprite_pos(t_sprite *object);
float			sprite_pos_x(t_sprite *object);
float			sprite_pos_y(t_sprite *object);
void			set_sprite_pos(t_sprite *object, t_vector *value);
void			set_sprite_pos_x(t_sprite *object, float value);
void			set_sprite_pos_y(t_sprite *object, float vlue);
float			sprite_dist(t_sprite *object);
void			set_sprite_dist(t_sprite *object, float value);

#endif
