/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pitch_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:24:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:14:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	get_pitch_value(void)
{
	float	result;

	result = 0.0f;
	if (cardinal_point() == 'N')
		result = M_PI / 2;
	else if (cardinal_point() == 'S')
		result = 3 * M_PI / 2;
	else if (cardinal_point() == 'W')
		result = M_PI;
	return (result);
}
