/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_bmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 08:37:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 16:47:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void		fill_bmp_header(t_bitmap *bmp)
{
	int			index;

	index = 0;
	bmp->file_size = (resolution_x() * resolution_y() *
	(bits_per_pixel() / 8)) + 54;
	bmp->pixel_data_offset = 54;
	bmp->header_size = 40;
	bmp->image_width = resolution_x();
	bmp->image_height = resolution_y();
	bmp->planes = 1;
	bmp->bits_per_pixel = bits_per_pixel();
	bmp->image_size = resolution_x() * resolution_y() * (bits_per_pixel() / 8);
}

static void		write_bmp_header(int fd, t_bitmap *bmp)
{
	write(fd, "BM", 2);
	write(fd, bmp, sizeof(t_bitmap));
}

static void		write_bmp_image_data(int fd)
{
	int				index;
	unsigned int	*line;
	unsigned int	*tmp_pixels;

	index = 0;
	tmp_pixels = (unsigned int *)pixels();
	while (index < resolution_y())
	{
		line = &tmp_pixels[(resolution_y() - index - 1) * size_line() /
		(bits_per_pixel() / 8)];
		write(fd, line, size_line());
		index++;
	}
}

/*
**	Creating a bitmap file to save a screenshot of the program, then quit the
**	program.
*/

void			create_bmp(void)
{
	int				fd;
	t_bitmap		*bmp;

	fd = open("./save.bmp", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		error_exit(BMP_ERROR);
	bmp = malloc_bitmap();
	pre_render_bmp();
	fill_bmp_header(bmp);
	write_bmp_header(fd, bmp);
	write_bmp_image_data(fd);
	close(fd);
	exit(0);
}
