/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_player.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:55:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/14 11:41:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_PLAYER_H
# define CUBE_PLAYER_H

typedef struct s_player
{
	t_vector	*pos;
	t_vector	*forward;
	t_vector	*right;
	t_color		*color;
}				t_player;

/*
**	CREATORS & DESTRUCTORS
*/

t_player	create_player();
t_player	*malloc_player();
void		destroy_player(t_player to_destroy);
void		free_player(t_player *to_free);
#endif
