/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_texture_step.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:29:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/15 16:29:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_texture_step(float value)
{
	g_engine->render_params->texture_step = value;
}
