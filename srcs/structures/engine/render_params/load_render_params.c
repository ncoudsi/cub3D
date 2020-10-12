/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_render_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:42:35 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 16:38:48 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Setting the 2 structures contained in t_render_params.
*/

void		load_render_params(void)
{
	load_texture_params();
	load_sprite_params();
}
