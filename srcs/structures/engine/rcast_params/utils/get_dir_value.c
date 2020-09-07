/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dir_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:22:50 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 13:23:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector    get_dir_value()
{
    t_vector    result;

	result.x = cosf(pitch()) * DIR_LENGTH;
	result.y = -(sinf(pitch())) * DIR_LENGTH;
    return (result);
}