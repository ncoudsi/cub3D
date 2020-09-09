/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_direction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:38:52 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 09:58:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    update_direction(float new_pitch_value)
{
    t_vector    new_forward;
    t_vector    new_right;
	t_vector	*new_dir;
	t_vector	*new_plane;

	new_dir = dir();
	new_plane = plane();
    while (new_pitch_value >= 2 * M_PI)
        new_pitch_value -= 2 * M_PI;
    while (new_pitch_value <= -(2 * M_PI))
        new_pitch_value += 2 * M_PI;
    set_pitch(new_pitch_value);
    new_forward = get_forward_value();
	set_forward(&new_forward);
	new_right = get_right_value();
	set_right(&new_right);
	*new_dir = get_dir_value();
	*new_plane = get_plane_value();
}
