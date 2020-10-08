/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_double_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:22:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 08:22:36 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_bool	is_double_param(char *param_line)
{
	if (param_line[0] == 'R' && resolution() != NULL)
		return (true);
	if (param_line[0] == 'N' && no_texture() != NULL)
		return (true);
	if (param_line[0] == 'S')
	{
		if (param_line[1] == 'O' && so_texture() != NULL)
			return (true);
		else if (sprite_texture() != NULL)
			return (true);
	}
	if (param_line[0] == 'W' && we_texture() != NULL)
		return (true);
	if (param_line[0] == 'E' && ea_texture() != NULL)
		return (true);
	if (param_line[0] == 'C' && ceiling_color() != NULL)
		return (true);
	if (param_line[0] == 'F' && floor_color() != NULL)
		return (true);
	return (false);
}
