/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_transformed_pos_y.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:18:35 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 14:31:44 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	transformed_pos_y(void)
{
	return (g_engine->render_params->sprite_params->transformed_pos->y);
}
