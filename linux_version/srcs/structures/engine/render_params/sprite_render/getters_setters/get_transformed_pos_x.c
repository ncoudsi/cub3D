/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_transformed_pos_x.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:17:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:34:51 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	transformed_pos_x(void)
{
	return (g_engine->render_params->sprite_params->transformed_pos->x);
}
