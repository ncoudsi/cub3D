/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_bitmap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 13:49:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 07:24:35 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_BITMAP_H
# define CUBE_BITMAP_H

typedef struct	s_bitmap
{
	unsigned int	file_size;
	unsigned short	reserved_1;
	unsigned short	reserved_2;
	unsigned int	pixel_data_offset;
	unsigned int	header_size;
	unsigned int	image_width;
	unsigned int	image_height;
	unsigned short	planes;
	unsigned short	bits_per_pixel;
	unsigned int	compression;
	unsigned int	image_size;
	unsigned int	x_pixels_per_meter;
	unsigned int	y_pixels_per_meter;
	unsigned int	total_colors;
	unsigned int	important_colors;
}				t_bitmap;

/*
**	CREATORS & DESTRUCTORS
*/

t_bitmap		create_bitmap();
void			destroy_bitmap(t_bitmap to_destroy);
t_bitmap		*malloc_bitmap();
void			free_bitmap(t_bitmap *to_free);

#endif
