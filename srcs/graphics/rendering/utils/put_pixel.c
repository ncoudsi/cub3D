/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:23:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/23 15:41:54 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	put_pixel(t_int_vector pos, t_color color)
{
	int		pixel_index;
	char	*tmp;

	pixel_index = get_pixel_index(pos);
	tmp = pixels() + pixel_index;
	*(unsigned int *)tmp = color.int_color;
}
