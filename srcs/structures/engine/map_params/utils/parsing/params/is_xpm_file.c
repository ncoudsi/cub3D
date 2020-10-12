/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_xpm_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:43:22 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:35:36 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking if a file has .xpm suffix. We shall check afterwards if the .xpm
**	file is well formated.
*/

t_bool	is_xpm_file(char *file_path)
{
	int	index;

	index = 0;
	if (ft_strlen(file_path) < 5)
		return (false);
	while (file_path[index] != '\0')
		index++;
	index -= 4;
	if (ft_strcmp(file_path + index, ".xpm") == false &&
	ft_strcmp(file_path + index, ".XPM") == false)
		return (false);
	return (true);
}
