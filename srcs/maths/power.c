/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:19:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/09 14:30:54 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	power(int nbr, int exponent)
{
	int	result;

	result = nbr;
	if (exponent < 0)
		return (0);
	if (exponent == 0)
		return (1);
	while (exponent > 1)
	{
		result *= nbr;
		exponent--;
	}
	return (result);
}
