/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_pos_x_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:44:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/21 16:45:22 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int const	*sprite_pos_x_tab()
{
	return (g_engine->render_params->sprite_tab->sprite_pos_x_tab);
}
