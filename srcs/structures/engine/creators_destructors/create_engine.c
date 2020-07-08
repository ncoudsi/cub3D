/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_engine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:03:37 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 12:09:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_engine	create_engine()
{
	t_engine	result;

	result.map_params = malloc_map_params();
	result.player = malloc_player();
	return (result);
}