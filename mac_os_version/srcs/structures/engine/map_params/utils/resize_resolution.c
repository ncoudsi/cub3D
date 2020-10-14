/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_resolution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:16:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:25:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Resizing resolution to the minimum size of the screen,
**	in width, height or both depending on prior resolution settings.
**	Minimum size is defined in cube_defines.h header.
**	Display a message on standard to warn the user.
*/

void	resize_to_min(void)
{
	t_int_vector	tmp;

	tmp = create_int_vector(resolution_x(), resolution_y());
	if (resolution_x() < MIN_RES_X)
		tmp.x = MIN_RES_X;
	if (resolution_y() < MIN_RES_X)
		tmp.y = MIN_RES_X;
	if (tmp.x != resolution_x() || tmp.y != resolution_y())
	{
		ft_putstr("Resolution has been resized to : ");
		ft_putnbr(tmp.x);
		ft_putchar('x');
		ft_putnbr(tmp.y);
		ft_putchar('.');
	}
	set_resolution(&tmp);
}

/*
**	Resizing resolution to the maximum size of the screen,
**	in width, height or both depending on prior resolution settings.
**	Display a message on standard to warn the user.
*/

void	resize_to_max(void)
{
	t_int_vector	screen_size;
	t_int_vector	tmp;

	screen_size = create_int_vector(1920, 1080);
	tmp = create_int_vector(resolution_x(), resolution_y());
	if (resolution_x() > screen_size.x)
		tmp.x = screen_size.x;
	if (resolution_y() > screen_size.y)
		tmp.y = screen_size.y;
	if (tmp.x != resolution_x() || tmp.y != resolution_y())
	{
		ft_putstr("Resolution has been resized to : ");
		ft_putnbr(tmp.x);
		ft_putchar('x');
		ft_putnbr(tmp.y);
		ft_putchar('.');
	}
	set_resolution(&tmp);
}

/*
**	In case of non coherent resolution settings (rather too small or
**	too large), we do resize.
*/

void	resize_resolution(void)
{
	if (resolution_x() < MIN_RES_X || resolution_y() < MIN_RES_Y)
		resize_to_min();
	else
		resize_to_max();
}
