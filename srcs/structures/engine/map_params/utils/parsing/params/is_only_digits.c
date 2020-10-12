/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_only_digits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:54:10 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:30:17 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking all the characters of a string, all characters must be digits.
*/

t_bool	is_only_digits(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_is_digit(str[index]) == false)
			return (false);
		index++;
	}
	return (true);
}
