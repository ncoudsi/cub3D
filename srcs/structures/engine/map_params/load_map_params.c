/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:13:55 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/02 15:44:23 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	fill_cardinal_point()
{
	t_vector	index;
	char		**file_map;

	index = create_vector(0, 0);
	file_map = map();
	while (file_map[(int)index.y] != NULL)
	{
		index.x = 0;
		while (file_map[(int)index.y][(int)index.x] != '\0')
		{
			if (is_cardinal_point(file_map[(int)index.y][(int)index.x]) == true)
				set_cardinal_point(file_map[(int)index.y][(int)index.x]);
			index.x++;
		}
		index.y++;
	}
}

static void fill_map_size()
{
    t_vector    *map_size;
    t_vector    index;

    map_size = (t_vector *)malloc(sizeof(t_vector));
    if (map_size == NULL)
    {
        set_map_size(NULL);
        return;
    }
    index = create_vector(0, 0);
    while (g_engine->map_params->map[(int)index.y] != NULL)
    {
        index.x = 0;
        while (g_engine->map_params->map[(int)index.y][(int)index.x] != '\0')
        {
            index.x++;
            if (index.x > map_size->x)
                map_size->x = index.x;
        }
        index.y++;
    }
    map_size->y = index.y - 1;
    map_size-> x--;
    set_map_size(map_size);
}

static t_bool   is_map_line(char *line)
{
    int index;

    index = 0;
    while (line[index] != '\0')
    {
        if (is_valid_map_entry(line[index]) == false)
            return(false);
        index++;
    }
    return (true);
}

static t_bool   is_all_map_params()
{
    if (resolution() == NULL)
        return (false);
    else if (no_textures() == NULL)
        return (false);
    else if (so_textures() == NULL)
        return (false);
    else if (we_textures() == NULL)
        return (false);
    else if (ea_textures() == NULL)
        return (false);
    else if (sprite_textures() == NULL)
        return (false);
    else if (ceiling_colors() == NULL)
        return (false);
    else if (floor_colors() == NULL)
        return (false);
    else if (map() == NULL)
        return (false);
	else if (cardinal_point() == '\0')
		return (false);
    else if (map_size() == NULL)
        return (false);
    return (true);
}

void		load_map_params(int fd)
{
	int     index;
    char    **map_file;

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
	fill_cardinal_point();
    fill_map_size();
    ft_free_tab((void **)map_file);
    if (is_all_map_params() == false)
        error_exit(MISS_PARAM_ERROR);
}
