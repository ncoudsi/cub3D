/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_forward_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:45:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:14:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector	get_forward_value(void)
{
	t_vector	result;

	result.x = cosf(pitch()) * move_speed();
	result.y = -(sinf(pitch())) * move_speed();
	return (result);
}
