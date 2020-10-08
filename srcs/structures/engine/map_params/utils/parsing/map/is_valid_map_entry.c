/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map_entry.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:15:23 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 11:18:39 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_bool	is_valid_map_entry(char c)
{
	if (c != '0' && c != '1' && c != '2' &&
	c != ' ' && is_cardinal_point(c) == false)
		return (false);
	return (true);
}
