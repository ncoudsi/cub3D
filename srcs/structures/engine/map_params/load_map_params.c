/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:13:55 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 14:25:15 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Look throught all the map to find the cardinal point corresponding to both
**	position and direction of the player spawn.
*/

static void		fill_cardinal_point(void)
{
	t_int_vector	index;
	char const		**file_map;

	index = create_int_vector(0, 0);
	file_map = map();
	while (file_map[index.y] != NULL)
	{
		index.x = 0;
		while (file_map[index.y][index.x] != '\0')
		{
			if (is_cardinal_point(file_map[index.y][index.x]) == true)
				set_cardinal_point(file_map[index.y][index.x]);
			index.x++;
		}
		index.y++;
	}
}

/*
**	Going throught all the map to define its size. Since all the lines
**	in the map don't necessarly have the same size, we set the absolute
**	size in y, and the longest line size in x.
*/

static void		fill_map_size(void)
{
	t_int_vector	size;
	t_int_vector	index;

	g_engine->map_params->map_size = malloc_int_vector(0, 0);
	if (map_size() == NULL)
		error_exit(MALLOC_ERROR);
	index = create_int_vector(0, 0);
	while (g_engine->map_params->map[index.y] != NULL)
	{
		index.x = 0;
		while (g_engine->map_params->map[index.y][index.x] != '\0')
		{
			index.x++;
			if (index.x > size.x)
				size.x = index.x;
		}
		index.y++;
	}
	size.y = index.y;
	set_map_size(&size);
}

/*
**	Check if we are currently on a line defining the map in the .cub file.
*/

static t_bool	is_map_line(char *line)
{
	int	index;

	index = 0;
	while (line[index] != '\0')
	{
		if (is_valid_map_entry(line[index]) == false)
			return (false);
		index++;
	}
	return (true);
}

/*
**	Checking if all the needed parameters as been set.
*/

static t_bool	is_all_map_params(void)
{
	if (resolution() == NULL)
		return (false);
	else if (no_texture() == NULL || path(no_texture()) == NULL)
		return (false);
	else if (so_texture() == NULL || path(so_texture()) == NULL)
		return (false);
	else if (we_texture() == NULL || path(we_texture()) == NULL)
		return (false);
	else if (ea_texture() == NULL || path(ea_texture()) == NULL)
		return (false);
	else if (sprite_texture() == NULL || path(sprite_texture()) == NULL)
		return (false);
	else if (ceiling_color() == NULL)
		return (false);
	else if (floor_color() == NULL)
		return (false);
	else if (map() == NULL)
		return (false);
	else if (cardinal_point() == '\0')
		return (false);
	else if (map_size() == NULL)
		return (false);
	return (true);
}

/*
**	Main function to set right values in t_map_params structure.
**	We first get the file, then parse it, then fill the right values
**	in the variables.
*/

void			load_map_params(int fd)
{
	int		index;
	char	**map_file;

	index = 0;
	map_file = get_map_file(fd);
	cube_file_parsing(map_file);
	while (map_file[index] != NULL)
	{
		if (map_file[index][0] != '\0')
		{
			if (is_map_line(map_file[index]) == false)
				fill_params(map_file[index]);
			else
				fill_map(map_file[index]);
		}
		index++;
	}
	if (map() == NULL)
		error_exit(MISS_PARAM_ERROR);
	fill_cardinal_point();
	fill_map_size();
	resize_map();
	ft_free_tab((void **)map_file);
	if (is_all_map_params() == false)
		error_exit(MISS_PARAM_ERROR);
}
