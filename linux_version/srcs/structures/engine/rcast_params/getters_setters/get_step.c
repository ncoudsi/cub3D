/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_step.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:16:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 12:27:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_int_vector const	*step(void)
{
	return (g_engine->rcast_params->step);
}