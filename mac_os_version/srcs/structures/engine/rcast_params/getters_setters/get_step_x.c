/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_step_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:16:42 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:19:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	step_x(void)
{
	return (g_engine->rcast_params->step->x);
}