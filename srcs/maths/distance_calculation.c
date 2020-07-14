/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_calculation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:11:43 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/10 09:28:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"
#include <stdio.h>

float	distance_calculation(t_vector starting_point, t_vector end_point)
{
	int tmp;
	int tmp2;

	tmp = pow(end_point.x - starting_point.x, 2);
	tmp2 = pow(end_point.y - starting_point.y, 2);
	return ((float)sqrt(tmp + tmp2));
}