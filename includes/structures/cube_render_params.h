/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_render_params.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:58:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:57:39 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_RENDER_PARAMS_H
# define CUBE_RENDER_PARAMS_H

typedef struct		s_render_params
{
	t_text_render	*texture_params;
	int				sprite_nbr;
	t_sprite		**sprite_tab;
}					t_render_params;

void				load_render_params();

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

t_text_render const	*texture_params();
void				set_texture_params(t_text_render *value);
int					sprite_nbr();
void				set_sprite_nbr(int value);
t_sprite const		**sprite_tab();
void				set_sprite_tab_index(int index, t_sprite *value);
void				set_sprite_tab_dist();

/*
**	UTILS
*/

float				calculate_wall_hitpoint_x();
int					calculate_texture_pos_x();
void				sort_sprite_tab();

#endif
