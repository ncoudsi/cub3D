/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_render_params.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:58:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 14:49:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_RENDER_PARAMS_H
# define CUBE_RENDER_PARAMS_H

typedef struct	s_render_params
{
	int				wall_height;
	int				wall_bottom;
	int				wall_top;
	float			wall_hitpoint_x;
	t_int_vector	*texture_pos;
	int				*texture_pos_x_tab;
	float			texture_step;
}				t_render_params;

void	load_render_params();

/*
**	CREATORS & DESTRUCTORS
*/

t_render_params		create_render_params();
void				destroy_render_params(t_render_params to_destroy);
t_render_params		*malloc_render_params();
void				free_render_params(t_render_params *to_free);

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

/*
**	UTILS
*/

float				calculate_wall_hitpoint_x();
int					calculate_texture_pos_x();
t_color				calculate_texture_color(t_vector *camera_index);
#endif
