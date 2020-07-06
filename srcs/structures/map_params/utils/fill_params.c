/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:30:58 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:30:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static t_bool is_double_param(char *param_line, const t_map_params *map_params)
{
    if (param_line[0] == 'R' && map_params->resolution != NULL)
        return (true);
    if (param_line[0] == 'N' && map_params->no_textures != NULL)
        return (true);
    if (param_line[0] == 'S')
    {
        if (param_line[1] == 'O' && map_params->so_textures != NULL)
            return (true);
        else if (map_params->sprite_textures != NULL)
            return (true);
    }
    if (param_line[0] == 'W' && map_params->we_textures != NULL)
        return (true);
    if (param_line[0] == 'E' && map_params->ea_textures != NULL)
        return (true);
    if (param_line[0] == 'C' && map_params->ceiling_colors != NULL)
        return (true);
    if (param_line[0] == 'F' && map_params->floor_colors != NULL)
        return (true);
    return (false);
}

void    fill_params(char *param_line, t_map_params *to_fill)
{
    char    **splitted_line;

    if (is_double_param(param_line, to_fill) == true)
        error_exit(DOUBLE_PARAM_ERROR);
    splitted_line = ft_split(param_line, ' ');
    if (splitted_line[0][0] == 'R')
        to_fill->resolution = splitted_line;
    else if (splitted_line[0][0] == 'N')
        to_fill->no_textures = splitted_line;
    else if (splitted_line[0][0] == 'S')
    {
        if (ft_strlen(splitted_line[0]) == 1)
            to_fill->sprite_textures = splitted_line;
        else
            to_fill->so_textures = splitted_line;
    }
    else if (splitted_line[0][0] == 'W')
        to_fill->we_textures = splitted_line;
    else if (splitted_line[0][0] == 'E')
        to_fill->ea_textures = splitted_line;
    else if (splitted_line[0][0] == 'C')
        to_fill->ceiling_colors = splitted_line;
    else if (splitted_line[0][0] == 'F')
        to_fill->floor_colors = splitted_line;
}