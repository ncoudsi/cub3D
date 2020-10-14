/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:37:28 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:47:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking the whole map for invalid entries. If one is found, return false.
*/

static t_bool	is_only_map_entries(char **map)
{
	t_int_vector	index;

	index = create_int_vector(0, 0);
	while (map[index.y] != NULL)
	{
		index.x = 0;
		while (map[index.y][index.x] != '\0')
		{
			if (is_valid_map_entry(map[index.y][index.x]) == false)
				return (false);
			index.x++;
		}
		index.y++;
	}
	return (true);
}

/*
**	Checking validity of the spawn point : must have one, but can't
**	have more.
*/

static t_bool	is_valid_spawn_point(char **map)
{
	t_int_vector	index;
	int				flag;

	index = create_int_vector(0, 0);
	flag = 0;
	while (map[index.y] != NULL)
	{
		index.x = 0;
		while (map[index.y][index.x] != '\0')
		{
			if (is_cardinal_point(map[index.y][index.x]) == true)
			{
				if (flag == 0)
					flag = 1;
				else if (flag == 1)
					return (false);
			}
			index.x++;
		}
		index.y++;
	}
	if (flag == 0)
		return (false);
	return (true);
}

/*
**	Checking the validity of the map throught 2 steps :
**	the map must contain only valid characters, any walkable
**	tile ('0') must be walled so the player can't go out of the map.
*/

static t_bool	is_valid_map(char **map)
{
	t_int_vector	index;

	index = create_int_vector(0, 0);
	if (is_only_map_entries(map) == false)
		return (false);
	while (map[index.y] != NULL)
	{
		index.x = 0;
		while (map[index.y][index.x] != '\0')
		{
			if (is_tile(map[index.y][index.x]) == true &&
			is_walled(map, index) == false)
				return (false);
			index.x++;
		}
		index.y++;
	}
	return (true);
}

/*
**	Checking that the map is the last element in the .cub file.
**	(Mandatory in the exercise subject).
*/

static t_bool	is_map_last_entry(char **map_file, int index)
{
	while (map_file[index] != NULL)
	{
		if (map_file[index][0] != '\0')
			return (false);
		index++;
	}
	return (true);
}

/*
**	Parsing the map of the .cub file. First we allocate memory so we can
**	consider the map as a 2 dimensions array. Then we check the validity
**	of the entries throught static functions.
*/

void			map_parsing(char **map_file, int *index)
{
	char	**map;

	map = (char **)ft_tab_new(1);
	while (map_file[*index] != NULL && map_file[*index][0] != '\0')
	{
		ft_add_to_tab((void *)map_file[*index], (void ***)&map);
		(*index)++;
	}
	if (map_file[*index] != NULL &&
	is_map_last_entry(map_file, *index) == false)
		error_exit(LAST_ENTRY_ERROR);
	if (is_valid_map(map) == false || is_valid_spawn_point(map) == false)
		error_exit(MAP_ERROR);
	free(map);
	(*index)--;
}
