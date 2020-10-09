/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_file_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 10:21:33 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 08:35:34 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	cube_file_parsing(char **map_file)
{
	int		index;
	char	**splitted_line;

	index = 0;
	while (map_file[index] != NULL)
	{
		splitted_line = ft_split(map_file[index], ' ');
		if (splitted_line[0] != NULL)
		{
			if (splitted_line[0][0] == 'R')
				resolution_parsing(splitted_line);
			else if (splitted_line[0][0] == 'N' || splitted_line[0][0] == 'S' ||
					splitted_line[0][0] == 'W' || splitted_line[0][0] == 'E')
				textures_parsing(splitted_line);
			else if (splitted_line[0][0] == 'C' || splitted_line[0][0] == 'F')
				colors_parsing(splitted_line);
			else if (splitted_line[0][0] == '1')
				map_parsing(map_file, &index);
			else
				error_exit(MAP_ENTRY);
		}
		ft_free_tab((void **)splitted_line);
		index++;
	}
}
