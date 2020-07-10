/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:19:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/10 09:05:01 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

float	f_power(float nbr, int exponent)
{
	float	result;

	result = 1;
	if (exponent < 0)
		return (0);
	if (exponent == 0)
		return (1);
	while (exponent > 0)
	{
		result *= nbr;
		exponent--;
	}
	return (result);
}
