/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_engine.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:54:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 15:33:57 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_ENGINE_H
# define CUBE_ENGINE_H

/*
**	Engine is the main structure of the program. It contains pointers to all
**	the other structures needed for diverse parameters. Also contain a boolean
**	to check if "--save" argument is on. Set in global extern since we use it
**	in almost all the functions in the program.
*/

typedef struct			s_engine
{
	t_map_params		*map_params;
	t_mlx_params		*mlx_params;
	t_player			*player;
	t_rcast_params		*rcast_params;
	t_render_params		*render_params;
	t_bool				bmp_save;
}						t_engine;

t_engine *g_engine;

void					load_game(int fd);

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
t_render_params const	*render_params();
t_bool					bmp_save();
void					set_bmp_save(t_bool value);
#endif
