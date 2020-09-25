/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_resolution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:16:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/25 14:57:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	resize_to_min()
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

void	resize_to_max()
{
	t_int_vector	screen_size;
	t_int_vector	tmp;

	screen_size = create_int_vector(0, 0);
	tmp = create_int_vector(resolution_x(), resolution_y());
	mlx_get_screen_size(mlx_ptr(), &screen_size.x, &screen_size.y);
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

void	resize_resolution()
{
	printf("X%i\nY%i\n", resolution_x(), resolution_y());
	if (resolution_x() < MIN_RES_X || resolution_y() < MIN_RES_Y)
		resize_to_min();
	else
		resize_to_max();
}