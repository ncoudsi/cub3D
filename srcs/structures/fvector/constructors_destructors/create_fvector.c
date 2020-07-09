/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_fvector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:43:18 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 14:44:15 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_fvector	create_fvector(float x, float y)
{
	t_fvector	result;

	result.x = x;
	result.y = y;
	return (result);
}
