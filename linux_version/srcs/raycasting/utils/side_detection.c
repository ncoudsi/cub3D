/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   side_detection.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:19:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 09:07:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking wich side of a map square the ray has hit, then setting the
**	related variable.
*/

void	side_detection(void)
{
	if (side() == 0 && ray_dir_x() > 0.0f)
		set_side(0);
	else if (side() == 0 && ray_dir_x() < 0.0f)
		set_side(2);
	else if (side() == 1 && ray_dir_y() > 0.0f)
		set_side(1);
	else if (side() == 1 && ray_dir_y() < 0.0f)
		set_side(3);
}
