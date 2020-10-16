/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_char_in_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:22:56 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/16 11:25:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	is_char_in_str(char to_find, char *str)
{
	int	index;

	index = 0 ;
	while (str[index] != '\0')
	{
		if (str[index] == to_find)
			return (true);
		index++;
	}
	return (false);
}