/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_text_render.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:23:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 13:15:30 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_TEXT_RENDER_H
# define CUBE_TEXT_RENDER_H

/*
**	Structure containing parameters needed for texture rendering. All the
**	values are set after performing raycasting.
*/

typedef struct		s_text_render
{
	int				wall_height;
	int				wall_bottom;
	int				wall_top;
	float			wall_hitpoint_x;
	t_int_vector	*texture_pos;
	int				*texture_pos_x_tab;
	float			texture_step;
}					t_text_render;

/*
**	CREATORS & DESTRUCTORS
*/

t_text_render		create_text_render();
void				destroy_text_render(t_text_render to_destroy);
t_text_render		*malloc_text_render();
void				free_text_render(t_text_render *to_free);

/*
**	GETTERS & SETTERS
*/

int					wall_height();
void				set_wall_height(int value);
int					wall_bottom();
void				set_wall_bottom(int value);
int					wall_top();
void				set_wall_top(int value);
float				wall_hitpoint_x();
void				set_wall_hitpoint_x(float value);
t_int_vector const	*texture_pos();
int					texture_pos_x();
int					texture_pos_y();
void				set_texture_pos(t_int_vector *value);
void				set_texture_pos_x();
void				set_texture_pos_y();
int const			*texture_pos_x_tab();
int					texture_pos_x_tab_index(int index);
void				set_texture_pos_x_tab(int index, int value);
float				texture_step();
void				set_texture_step(float value);

#endif
