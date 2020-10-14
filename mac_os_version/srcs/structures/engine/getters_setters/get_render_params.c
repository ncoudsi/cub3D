/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_render_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:34:10 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 11:33:21 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_render_params const	*render_params(void)
{
	return (g_engine->render_params);
}
