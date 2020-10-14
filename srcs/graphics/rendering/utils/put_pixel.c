/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:23:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 10:00:13 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	According to MLX behavior, every pixel of the screen is represented by 4
**	char, each containing, in this order, the red value, the green value, the
**	blue value and the alpha value (all from 0 to 255). Here we contracted all
**	4 values in one unsigned int and put it on screen.
*/

void	put_pixel(t_int_vector pos, t_color color)
{
	int		pixel_index;
	char	*tmp;

	pixel_index = get_pixel_index(pos);
	tmp = pixels() + pixel_index;
	*(unsigned int *)tmp = color.int_color;
}
