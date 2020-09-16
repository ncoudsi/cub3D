/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture_pos_x_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:35:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/16 10:35:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int const	*texture_pos_x_tab()
{
	return (g_engine->render_params->texture_pos_x_tab);
}
