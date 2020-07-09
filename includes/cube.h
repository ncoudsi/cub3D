/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:22:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 12:32:43 by ncoudsi          ###   ########.fr       */
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
#endif
