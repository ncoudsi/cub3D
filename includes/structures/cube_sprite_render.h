/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_sprite_render.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:04:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 15:31:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_SPRITE_RENDER_H
# define CUBE_SPRITE_RENDER_H

typedef struct	s_sprite_render
{
	int				sprite_nbr;
	t_sprite		**sprite_tab;
}				t_sprite_render;

/*
**	CREATORS & DESTRUCTORS
*/

t_sprite_render	create_sprite_render();
void			destroy_sprite_render(t_sprite_render to_destroy);
t_sprite_render	*malloc_sprite_render();
void			free_sprite_render(t_sprite_render *to_free);

/*
**	GETTERS & SETTERS
*/

int				sprite_nbr();
void			set_sprite_nbr(int value);
t_sprite const	**sprite_tab();
void			set_sprite_tab_index(int index, t_sprite *value);
void			set_sprite_tab_dist();

#endif