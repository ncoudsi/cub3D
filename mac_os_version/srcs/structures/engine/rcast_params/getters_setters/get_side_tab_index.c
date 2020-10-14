/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_side_tab_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:09:44 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/17 15:12:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	side_tab_index(int index_value)
{
	return (g_engine->rcast_params->side_tab[index_value]);
}
