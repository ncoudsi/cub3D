/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite_tab_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:52:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/01 13:53:23 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_sprite const	*sprite_tab_index(int index)
{
	return (g_engine->render_params->sprite_params->sprite_tab[index]);
}