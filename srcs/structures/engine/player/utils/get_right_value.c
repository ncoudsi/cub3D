/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_right_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:46:55 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/02 13:35:34 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector	get_right_value()
{
	t_vector	result;

	result.x = (cosf(pitch() - M_PI / 2)) * move_speed();
	result.y = -(sinf(pitch() - M_PI / 2)) * move_speed();
	return (result);
}
