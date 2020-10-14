/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_int_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 14:49:27 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/02 13:47:46 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_int_vector	create_int_vector(int x, int y)
{
	t_int_vector	result;

	result.x = x;
	result.y = y;
	return (result);
}
