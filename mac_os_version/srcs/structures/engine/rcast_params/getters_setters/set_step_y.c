/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_step_y.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:57:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 15:57:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_step_y(int value)
{
	g_engine->rcast_params->step->y = value;
}
