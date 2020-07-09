/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_engine.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:54:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 12:15:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_ENGINE_H
# define CUBE_ENGINE_H

typedef struct s_engine
{
	t_map_params	*map_params;
	t_mlx_params	*mlx_params;
	t_player		*player;
}				t_engine;

extern t_engine *g_engine;

/*
**	CREATORS & DESTRUCTORS
*/

t_engine	create_engine();
t_engine	*malloc_engine();
void		destroy_engine();
void		free_engine();

/*
**	GETTERS & SETTERS
*/

void	*mlx_ptr();
void	set_mlx_ptr(void *value);
void	*win_ptr();
void	set_win_ptr(void *value);
void	*img_ptr();
void	set_img_ptr(void *value);
char	*pixels();
void	set_pixels(char *value);
int		bits_per_pixel();
void	set_bits_per_pixel(int value);
int		size_line();
void	set_size_line(int value);
int		endian();
void	set_size_line(int value);
int		resolution_x();
int		resolution_y();
#endif
