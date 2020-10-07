/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_bitmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 13:56:38 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/07 13:59:20 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_bitmap	create_bitmap(void)
{
	t_bitmap	result;

	result.file_size = 0;
	result.reserved_1 = 0;
	result.reserved_2 = 0;
	result.pixel_data_offset = 0;
	result.header_size = 0;
	result.image_width = 0;
	result.image_height = 0;
	result.planes = 0;
	result.bits_per_pixel = 0;
	result.compression = 0;
	result. image_size = 0;
	result.x_pixels_per_meter = 0;
	result.y_pixels_per_meter = 0;
	result.total_colors = 0;
	result.important_colors = 0;
	return (result);
}
