/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_render_params.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:05:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/28 11:52:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_render_params(t_render_params to_destroy)
{
	free_int_vector(to_destroy.texture_pos);
	free(to_destroy.texture_pos_x_tab);
	free_sprite_tab(to_destroy.sprite_tab, sprite_nbr());
}
