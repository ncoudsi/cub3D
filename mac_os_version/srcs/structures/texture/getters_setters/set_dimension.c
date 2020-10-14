/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_dimension.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:54:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 13:54:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_dimension(t_int_vector *value, t_texture *object)
{
	object->dimension->x = value->x;
	object->dimension->y = value->y;
}
