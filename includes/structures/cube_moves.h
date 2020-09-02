/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_moves.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:58:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/31 16:06:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_MOVES_H
# define CUBE_MOVES_H

typedef struct  s_moves
{
    t_bool  forward;
    t_bool  backward;
    t_bool  right;
    t_bool  left;
    t_bool  rotation_right;
    t_bool  rotation_left;
}               t_moves;

/*
**  CREATORS & DESTRUCTORS
*/

t_moves create_moves();
t_moves *malloc_moves();
void    free_moves(t_moves *to_free);

#endif