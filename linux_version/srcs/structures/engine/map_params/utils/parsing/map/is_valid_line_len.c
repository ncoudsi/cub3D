/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_line_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:19:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:58:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking the validity of the line in the case where the actual line
**	is longer than the next one.
*/

static t_bool	longer_line_check(char **map, int index,
size_t line_len, size_t next_line_len)
{
	while (next_line_len < line_len)
	{
		if (map[index][next_line_len] != '1'
		&& map[index][next_line_len] != ' ')
			return (false);
		next_line_len++;
	}
	return (true);
}

/*
**	Checking the validity of the line in the case where the actual line
**	is shorter than the next one.
*/

static t_bool	shorter_line_check(char **map, int index,
size_t line_len, size_t next_line_len)
{
	while (next_line_len > line_len)
	{
		next_line_len--;
		if (map[index + 1][next_line_len] != '1' &&
		map[index + 1][next_line_len] != ' ')
			return (false);
	}
	return (true);
}

/*
**	Checking if a line is valid, depending on its length and
**	next line lenght. Since every tile shall be walled, the
**	longer line must have only walls or empty spaces ('1' or ' ')
**	on characters that exceed the shorter line lenght.
*/

t_bool			is_valid_line_len(char **map, int index)
{
	size_t	line_len;
	size_t	next_line_len;

	if (map[index + 1] == NULL)
		return (true);
	line_len = ft_strlen(map[index]);
	next_line_len = ft_strlen(map[index + 1]);
	if (line_len > next_line_len &&
	longer_line_check(map, index, line_len, next_line_len) == false)
		return (false);
	else if (line_len < next_line_len &&
	shorter_line_check(map, index, line_len, next_line_len) == false)
		return (false);
	return (true);
}
