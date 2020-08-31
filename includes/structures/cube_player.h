/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_player.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:55:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/31 14:19:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_PLAYER_H
# define CUBE_PLAYER_H

typedef struct s_player
{
	t_vector	*pos;
	t_vector	*forward;
	t_vector	*right;
	t_moves		*moves;
	int			move_speed;
	int			rotation_speed;
	float		pitch;
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
int			move_speed();
void		set_move_speed(int value);
int			rotation_speed();
void		set_rotation_speed(int value);
float		pitch();
void		set_pitch(float value);

/*
**	UTILS
*/

float		get_pitch_value();
t_vector	get_forward_value();
t_vector	get_right_value();
void		set_moves(int key);
void		unset_moves(int key);
#endif
