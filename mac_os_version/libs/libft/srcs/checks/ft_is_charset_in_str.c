/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_charset_in_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:14:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/14 16:26:05 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checking if charset string contain to_find character. Returns true at the
**	first occurence, false if none is found.
*/

static t_bool	is_in_charset(char to_find, char *charset)
{
	int	index;

	index = 0;
	while (charset[index] != '\0')
	{
		if (charset[index] == to_find)
			return (true);
		index++;
	}
	return (false);
}

/*
**	Checking if str string contains at least one character of the to_find
**	string. Return true at the first occurence, return false if none is found.
*/

t_bool			ft_is_charset_in_str(char *str, char *to_find)
{
	size_t	index;

	index = 0;
	if (str == NULL || to_find == '\0')
		return (0);
	while (str[index] != '\0')
	{
		if (is_in_charset(str[index], to_find) == true)
			return (true);
		index++;
	}
	return (false);
}
