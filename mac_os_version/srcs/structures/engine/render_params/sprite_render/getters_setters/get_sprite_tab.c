/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:42:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:33:46 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite const	**sprite_tab(void)
{
	return ((t_sprite const **)g_engine->
	render_params->sprite_params->sprite_tab);
}
