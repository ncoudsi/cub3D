/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_sprite_render.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:04:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 07:24:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_SPRITE_RENDER_H
# define CUBE_SPRITE_RENDER_H

typedef struct		s_sprite_render
{
	int				sprite_nbr;
	t_sprite		**sprite_tab;
	t_vector		*absolute_sprite_pos;
	t_vector		*relative_sprite_pos;
	float			inverted_matrix;
	t_vector		*transformed_pos;
	int				sprite_screen_x;
	int				sprite_height;
	int				sprite_top;
	int				sprite_bottom;
	int				sprite_width;
	int				sprite_left;
	int				sprite_right;
	t_int_vector	*sprite_texture_pos;
	int				encule;
}					t_sprite_render;

/*
**	CREATORS & DESTRUCTORS
*/

t_sprite_render		create_sprite_render();
void				destroy_sprite_render(t_sprite_render to_destroy);
t_sprite_render		*malloc_sprite_render();
void				free_sprite_render(t_sprite_render *to_free);

/*
**	GETTERS & SETTERS
*/

int					sprite_nbr();
void				set_sprite_nbr(int value);
t_sprite const		**sprite_tab();
t_sprite const		*sprite_tab_index(int index);
void				set_sprite_tab_index(int index, t_sprite *value);
void				set_sprite_tab_dist();
void				set_sprite_tab_pos(void);
t_vector const		*absolute_sprite_pos();
float				absolute_sprite_pos_x();
float				absolute_sprite_pos_y();
void				set_absolute_sprite_pos(t_vector *value);
void				set_absolute_sprite_pos_x(float value);
void				set_absolute_sprite_pos_y(float value);
t_vector const		*relative_sprite_pos();
float				relative_sprite_pos_x();
float				relative_sprite_pos_y();
void				set_relative_sprite_pos(t_vector *value);
void				set_relative_sprite_pos_x(float value);
void				set_relative_sprite_pos_y(float value);
float				inverted_matrix();
void				set_inverted_matrix(float value);
t_vector const		*transformed_pos();
float				transformed_pos_x();
float				transformed_pos_y();
void				set_transformed_pos(t_vector *value);
void				set_transformed_pos_x(float value);
void				set_transformed_pos_y(float value);
int					sprite_screen_x();
void				set_sprite_screen_x(int value);
int					sprite_height();
void				set_sprite_height(int value);
int					sprite_top();
void				set_sprite_top(int value);
int					sprite_bottom();
void				set_sprite_bottom(int value);
int					sprite_width();
void				set_sprite_width(int value);
int					sprite_left();
void				set_sprite_left(int value);
int					sprite_right();
void				set_sprite_right(int value);
t_int_vector const	*sprite_texture_pos();
int					sprite_texture_pos_x();
int					sprite_texture_pos_y();
void				set_sprite_texture_pos(t_int_vector *value);
void				set_sprite_texture_pos_x(int value);
void				set_sprite_texture_pos_y(int value);

#endif
