/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_render_params.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:05:48 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:46:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_render_params(t_render_params to_destroy)
{
	free_text_render(to_destroy.texture_params);
	free_sprite_tab(to_destroy.sprite_tab, sprite_nbr());
}
