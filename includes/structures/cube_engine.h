/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_engine.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:54:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 14:58:51 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_ENGINE_H
# define CUBE_ENGINE_H

typedef struct s_engine
{
	t_map_params		*map_params;
	t_mlx_params		*mlx_params;
	t_player			*player;
	t_rcast_params		*rcast_params;
}				t_engine;

extern t_engine *g_engine;

void					load_game(int fd);
void					close_game();
/*
**	CREATORS & DESTRUCTORS
*/

t_engine				create_engine();
t_engine				*malloc_engine();
void					destroy_engine();
void					free_engine();

/*
**	GETTERS & SETTERS
*/

t_map_params const		*map_params();
t_mlx_params const		*mlx_params();
t_player const			*player();
t_rcast_params const	*rcast_params();
#endif
