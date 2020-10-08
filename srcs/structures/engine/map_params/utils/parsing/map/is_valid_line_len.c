/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_line_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:19:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 11:36:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static t_bool	bigger_line_check(char **map, int index,
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

static t_bool	smaller_line_check(char **map, int index,
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

t_bool			is_valid_line_len(char **map, int index)
{
	size_t	line_len;
	size_t	next_line_len;

	if (map[index + 1] == NULL)
		return (true);
	line_len = ft_strlen(map[index]);
	next_line_len = ft_strlen(map[index + 1]);
	if (line_len > next_line_len &&
	bigger_line_check(map, index, line_len, next_line_len) == false)
		return (false);
	else if (line_len < next_line_len &&
	smaller_line_check(map, index, line_len, next_line_len) == false)
		return (false);
	return (true);
}
