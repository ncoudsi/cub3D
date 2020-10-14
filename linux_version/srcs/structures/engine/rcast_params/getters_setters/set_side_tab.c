/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_side_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:10:37 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 15:11:02 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	set_side_tab(int index, int value)
{
	g_engine->rcast_params->side_tab[index] = value;
}
