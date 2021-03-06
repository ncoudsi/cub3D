/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:18:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 14:27:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Going throught all the .cub file and storing all the lines of the file in
**	a char** variable.
*/

char	**get_map_file(int fd)
{
	char	**result;
	char	*line;

	result = NULL;
	line = NULL;
	while (get_next_line(fd, &line) > 0)
		ft_add_to_tab((void *)line, (void ***)&result);
	ft_add_to_tab((void *)line, (void ***)&result);
	return (result);
}
