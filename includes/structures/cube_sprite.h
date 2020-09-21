/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_sprite.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 13:17:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:49:23 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_SPRITE_H
# define CUBE_SPRITE_H

typedef struct	s_sprite
{
	int				sprite_height;
	int				sprite_bottom;
	int				sprite_top;
	float			sprite_hitpoint_x;
	t_int_vector	*sprite_pos;
	float			sprite_step;
}				t_sprite;

typedef struct	s_sprite_tab
{
	t_sprite	*sprites;
	int			tab_size;
	int			sprites_on_screen;
	int			*sprite_pos_x_tab;
}				t_sprite_tab;

/*
**	CREATORS && DESTRUCTORS
*/

t_sprite			create_sprite();
void				destroy_sprite(t_sprite to_destroy);
t_sprite			*malloc_sprite();
void				free_sprite(t_sprite *to_free);
t_sprite_tab		create_sprite_tab();
void				destroy_sprite_tab(t_sprite_tab to_destroy);
t_sprite_tab		*malloc_sprite_tab();
void				free_sprite_tab(t_sprite_tab *to_free);

/*
**	GETTERS & SETTERS
*/

int					sprite_height(int sprite_index);
void				set_sprite_height(int sprite_index, int value);
int					sprite_bottom(int sprite_index);
void				set_sprite_bottom(int sprite_index, int value);
int					sprite_top(int sprite_index);
void				set_sprite_top(int sprite_index, int value);
float				sprite_hitpoint_x(int sprite_index);
void				set_sprite_hitpoint_x(int sprite_index, float value);
t_int_vector const	*sprite_pos(int sprite_index);
int					sprite_pos_x(int sprite_index);
int					sprite_pos_y(int sprite_index);
void				set_sprite_pos(int sprite_index, t_int_vector *value);
void				set_sprite_pos_x(int sprite_index, int value);
void				set_sprite_pos_y(int sprite_index, int value);
float				sprite_step(int sprite_index);
void				set_sprite_step(int sprite_index, float value);
t_sprite const		*sprites();
int					tab_size();
void				set_tab_size(int value);
int					sprites_on_screen();
void				set_sprites_on_screen(int value);
int const			*sprite_pos_x_tab();
void				set_sprite_pos_x_tab_index(int index, int value);

#endif
