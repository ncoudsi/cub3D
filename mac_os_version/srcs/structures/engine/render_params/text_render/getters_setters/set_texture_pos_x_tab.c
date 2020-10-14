/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_texture_pos_x_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:35:49 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/30 14:50:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_texture_pos_x_tab(int index, int value)
{
	g_engine->render_params->texture_params->texture_pos_x_tab[index] = value;
}
