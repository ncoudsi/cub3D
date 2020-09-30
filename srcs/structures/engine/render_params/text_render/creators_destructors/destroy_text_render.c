/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_text_render.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:45:25 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:45:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	destroy_text_render(t_text_render to_destroy)
{
	free_int_vector(to_destroy.texture_pos);
	free(to_destroy.texture_pos_x_tab);
}