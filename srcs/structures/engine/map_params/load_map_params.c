/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:13:55 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/10 16:46:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	fill_cardinal_point()
{
	t_vector	index;
	char const	**file_map;

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
    t_vector    size;
    t_vector    index;

    g_engine->map_params->map_size = (t_vector *)malloc(sizeof(t_vector));
	if (map_size() == NULL)
		error_exit(MALLOC_ERROR);
	index = create_vector(0, 0);
    while (g_engine->map_params->map[(int)index.y] != NULL)
    {
        index.x = 0;
        while (g_engine->map_params->map[(int)index.y][(int)index.x] != '\0')
        {
            index.x++;
            if (index.x > size.x)
                size.x = index.x;
        }
        index.y++;
    }
    size.y = index.y - 1;
    size. x--;
    set_map_size(&size);
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
    // resize_map();
	ft_free_tab((void **)map_file);
    if (is_all_map_params() == false)
        error_exit(MISS_PARAM_ERROR);
}
