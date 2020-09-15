/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_render_params.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:58:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/15 13:54:27 by ncoudsi          ###   ########.fr       */
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
	int				texture_x;
}				t_render_params;

/*
**	CREATORS & DESTRUCTORS
*/

t_render_params	create_render_params();
void			destroy_render_params(t_render_params to_destroy);
t_render_params	*malloc_render_params();
void			free_render_params(t_render_params *to_free);

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
int					texture_x();
void				set_texture_x(int value);

#endif
