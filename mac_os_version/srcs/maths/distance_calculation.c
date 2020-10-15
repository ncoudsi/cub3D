/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_calculation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:11:43 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 09:23:30 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Calculating a distance between 2 points, expressed in floating point.
*/

float	distance_calculation(t_vector starting_point, t_vector end_point)
{
	int tmp;
	int tmp2;

	tmp = pow(end_point.x - starting_point.x, 2);
	tmp2 = pow(end_point.y - starting_point.y, 2);
	return ((float)sqrt(tmp + tmp2));
}
