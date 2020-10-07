/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_int_in_bmp_buffer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:57:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/07 11:24:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_int_in_bmp_buffer(unsigned char *bmp_buffer, int file_size)
{
	bmp_buffer[0] = (unsigned char)(file_size);
	bmp_buffer[1] = (unsigned char)(file_size >> 8);
	bmp_buffer[2] = (unsigned char)(file_size >> 16);
	bmp_buffer[3] = (unsigned char)(file_size >> 24);
}