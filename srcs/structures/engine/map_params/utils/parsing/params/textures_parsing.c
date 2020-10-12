/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_parsing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:55:05 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:35:27 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	All these static functions check the validity of the texture key. 2 steps :
**	numbers of characters, and wich character it is. Note that we already
**	checked the first character to arrive here.
*/

static void	north_parsing(char *str)
{
	if (ft_strlen(str) != 2)
		error_exit(TEX_ERROR);
	else if (str[1] != 'O')
		error_exit(TEX_ERROR);
}

static void	south_or_sprite_parsing(char *str)
{
	if (ft_strlen(str) == 2 && str[1] != 'O')
		error_exit(TEX_ERROR);
}

static void	west_parsing(char *str)
{
	if (ft_strlen(str) != 2)
		error_exit(TEX_ERROR);
	else if (str[1] != 'E')
		error_exit(TEX_ERROR);
}

static void	east_parsing(char *str)
{
	if (ft_strlen(str) != 2)
		error_exit(TEX_ERROR);
	else if (str[1] != 'A')
		error_exit(TEX_ERROR);
}

/*
**	Parsing texture settings, they must all have only 2 entries
**	(key, path). The key has only 1 or 2 characters. After
**	checking the validity of the key, we check if the path is
**	rigth and if it is an .xpm file.
*/

void		textures_parsing(char **textures_parsing)
{
	int	fd;

	if (ft_tab_len((void **)textures_parsing) != 2)
		error_exit(TEX_ERROR);
	else if (ft_strlen(textures_parsing[0]) > 2)
		error_exit(TEX_ERROR);
	if (textures_parsing[0][0] == 'N')
		north_parsing(textures_parsing[0]);
	else if (textures_parsing[0][0] == 'S')
		south_or_sprite_parsing(textures_parsing[0]);
	else if (textures_parsing[0][0] == 'W')
		west_parsing(textures_parsing[0]);
	else if (textures_parsing[0][0] == 'E')
		east_parsing(textures_parsing[0]);
	fd = open(textures_parsing[1], O_RDONLY);
	if (fd == -1)
		error_exit(TEX_ERROR);
	else if (is_xpm_file(textures_parsing[1]) == false)
		error_exit(TEX_ERROR);
}
