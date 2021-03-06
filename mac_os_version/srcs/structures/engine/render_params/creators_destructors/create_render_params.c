/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_render_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:03:35 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:39:16 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_render_params	create_render_params(void)
{
	t_render_params	result;

	result.texture_params = malloc_text_render();
	result.sprite_params = malloc_sprite_render();
	return (result);
}
