/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_direction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:38:52 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/02 12:05:43 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void    update_direction(float new_pitch_value)
{
    t_vector    *new_forward;
    t_vector    *new_right;

    new_forward = forward();
    new_right = right();
    while (new_pitch_value >= 2 * M_PI)
        new_pitch_value -= 2 * M_PI;
    while (new_pitch_value <= -(2 * M_PI))
        new_pitch_value += 2 * M_PI;
    set_pitch(new_pitch_value);
    *new_forward = get_forward_value();
    *new_right = get_right_value();
}