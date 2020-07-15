/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_player.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:55:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/15 11:36:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_PLAYER_H
# define CUBE_PLAYER_H

typedef struct s_player
{
	t_vector	*pos;
	t_vector	*forward;
	t_vector	*right;
	int			move_speed;
}				t_player;

void		load_player();

/*
**	CREATORS & DESTRUCTORS
*/

t_player	create_player();
t_player	*malloc_player();
void		destroy_player(t_player to_destroy);
void		free_player(t_player *to_free);

/*
**	GETTERS & SETTERS
*/

t_vector	*pos();
int			pos_x();
int			pos_y();
void		set_pos(t_vector *value);
t_vector	*forward();
int			forward_x();
int			forward_y();
void		set_forward(t_vector *value);
t_vector	*right();
int			right_x();
int			right_y();
void		set_right(t_vector *value);

#endif
