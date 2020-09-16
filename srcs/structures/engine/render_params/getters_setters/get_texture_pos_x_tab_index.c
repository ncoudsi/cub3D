/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture_pos_x_tab_index.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:50:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 10:51:04 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	texture_pos_x_tab_index(int index)
{
	return (g_engine->render_params->texture_pos_x_tab[index]);
}
