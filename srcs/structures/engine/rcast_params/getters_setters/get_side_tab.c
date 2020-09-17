/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_side_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:07:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 15:09:33 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int const	*side_tab()
{
	return (g_engine->rcast_params->side_tab);
}
