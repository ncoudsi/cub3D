/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_old_time.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:56:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/07 11:57:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float   old_time()
{
    return (g_engine->rcast_params->old_time);
}