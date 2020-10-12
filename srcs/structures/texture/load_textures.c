/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:36:29 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 13:27:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Setting all the variables in all the t_texture structures.
*/

void	load_textures(void)
{
	load_no_texture();
	load_so_texture();
	load_we_texture();
	load_ea_texture();
	load_sprite_texture();
}
