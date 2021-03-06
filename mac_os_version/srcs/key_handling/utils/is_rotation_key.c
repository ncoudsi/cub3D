/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rotation_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:14:21 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 09:40:13 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking if the pressed key is related to player rotation.
*/

t_bool	is_rotation_key(int key)
{
	if (key == RIGHT_ARROW || key == LEFT_ARROW)
		return (true);
	return (false);
}
