/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_side_dist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:20:36 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/09 16:30:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_vector const	*side_dist()
{
	return (g_engine->rcast_params->side_dist);
}
