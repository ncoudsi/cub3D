/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:22:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/10 09:20:01 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_H
# define CUBE_H

# include "cube_includes.h"

int		cube_file_fd();
/*
**  KEY_HANDLING
*/

int		key_handler(int key);

/*
**	GRAPHICS
*/

void	run_application();
int		get_pixel_index(t_vector pos);
void	put_pixel(t_vector pos, t_color color);
void	draw_rectangle(t_vector pos, t_vector dimension, t_color color);
void	draw_circle(t_vector center, int radius, t_color color);

/*
**	MATHS
*/

float		f_power(float nbr, int exponent);
float		distance_calculation(t_vector starting_point, t_vector end_point);
#endif
