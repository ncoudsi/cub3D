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

static t_bool   is_double_param(char *param_line, const t_map_params *map_params)
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

static void     fill_resolution(char **splitted_line, t_map_params *to_fill)
{
        int resolution_x;
        int resolution_y;

        resolution_x = ft_atoi(splitted_line[1]);
        resolution_y = ft_atoi(splitted_line[2]);
        to_fill->resolution = malloc_vector(resolution_x, resolution_y);
        ft_free_tab((void **)splitted_line);
}

static void     fill_textures(char ** splitted_line, t_map_params *to_fill)
{
    if (splitted_line[0][0] == 'N')
    {
        to_fill->no_textures = ft_strdup(splitted_line[1]);
        ft_free_tab((void **)splitted_line);
    }
    else if (splitted_line[0][0] == 'S' && ft_strlen(splitted_line[0]) == 1)
    {
        to_fill->sprite_textures = ft_strdup(splitted_line[1]);
        ft_free_tab((void **)splitted_line);
    }
    else if (splitted_line[0][0] == 'S' && ft_strlen(splitted_line[0]) == 2)
    {
        to_fill->so_textures = ft_strdup(splitted_line[1]);
        ft_free_tab((void **)splitted_line);
    }
    else if (splitted_line[0][0] == 'W')
    {
        to_fill->we_textures = ft_strdup(splitted_line[1]);
        ft_free_tab((void **)splitted_line);
    }
    else if (splitted_line[0][0] == 'E')
    {
        to_fill->ea_textures = ft_strdup(splitted_line[1]);
        ft_free_tab((void **)splitted_line);
    }
}

void            fill_ceilling_color(char **splitted_line, t_map_params *to_fill)
{
    int index;
    unsigned char r;
    unsigned char g;
    unsigned char b;

    index = 0;
    r = (unsigned char)ft_atoi(splitted_line[1]);
    while (ft_is_digit(splitted_line[1][index]) == true)
        index++;
    index++;
    g = (unsigned char)ft_atoi(splitted_line[1] + index);
    while (ft_is_digit(splitted_line[1][index]) == true)
        index++;
    index++;
    b = (unsigned char)ft_atoi(splitted_line[1] + index);
    to_fill->ceiling_colors = malloc_color(r, g, b);
    ft_free_tab((void **)splitted_line);
}

void            fill_floor_color(char **splitted_line, t_map_params *to_fill)
{
    int index;
    unsigned char r;
    unsigned char g;
    unsigned char b;

    index = 0;
    r = (unsigned char)ft_atoi(splitted_line[1]);
    while (ft_is_digit(splitted_line[1][index]) == true)
        index++;
    index++;
    g = (unsigned char)ft_atoi(splitted_line[1] + index);
    while (ft_is_digit(splitted_line[1][index]) == true)
        index++;
    index++;
    b = (unsigned char)ft_atoi(splitted_line[1] + index);
    to_fill->floor_colors = malloc_color(r, g, b);
    ft_free_tab((void **)splitted_line);
}

void            fill_params(char *param_line, t_map_params *to_fill)
{
    char    **splitted_line;

    if (is_double_param(param_line, to_fill) == true)
        error_exit(DOUBLE_PARAM_ERROR);
    splitted_line = ft_split(param_line, ' ');
    if (splitted_line[0][0] == 'R')
        fill_resolution(splitted_line, to_fill);
    else if (splitted_line[0][0] == 'N' || splitted_line[0][0] == 'S' ||
    splitted_line[0][0] == 'W' || splitted_line[0][0] == 'E')
        fill_textures(splitted_line, to_fill);
    else if (splitted_line[0][0] == 'C')
        fill_ceilling_color(splitted_line, to_fill);
    else if (splitted_line[0][0] == 'F')
        fill_floor_color(splitted_line, to_fill);
}