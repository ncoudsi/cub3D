/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_movement_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:46:18 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/05 13:07:16 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_bool	is_movement_key(int key)
{
	if (key == W_KEY || key == S_KEY || key == A_KEY || key == D_KEY)
		return (true);
	return (false);
}
