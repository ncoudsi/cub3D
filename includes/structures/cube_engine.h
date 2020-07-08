/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_engine.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:54:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 11:59:59 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_ENGINE_H
# define CUBE_ENGINE_H

typedef struct s_engine
{
	t_map_params	*map_params;
	t_player		*player;
}				t_engine;

/*
**	CREATORS & DESTRUCTORS
*/

t_engine	create_engine();
t_engine	*malloc_engine();
void		destroy_engine(t_engine to_destroy);
void		free_engine(t_engine *to_free);
#endif
