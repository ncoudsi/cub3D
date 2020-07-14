/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:28:39 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

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
    return (true);
}

static void		load_map_params(int fd)
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
    ft_free_tab((void **)map_file);
    if (is_all_map_params() == false)
        error_exit(MISS_PARAM_ERROR);
}

void            load_game(int fd)
{
	load_map_params(fd);
	load_player();
}
