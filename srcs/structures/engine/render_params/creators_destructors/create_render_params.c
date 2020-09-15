/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_render_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:03:35 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/15 13:56:19 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_render_params	create_render_params()
{
	t_render_params	result;

	result.wall_height = 0;
	result.wall_bottom = 0;
	result.wall_top = 0;
	result.wall_hitpoint_x = 0;
	result.texture_x = 0;
	return  (result);
}
