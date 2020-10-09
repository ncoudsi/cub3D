/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 08:20:10 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/09 08:05:30 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void		fill_resolution(char **splitted_line)
{
	t_int_vector	res;

	res.x = ft_atoi(splitted_line[1]);
	res.y = ft_atoi(splitted_line[2]);
	g_engine->map_params->resolution = malloc_int_vector(0, 0);
	if (resolution() == NULL)
		error_exit(MALLOC_ERROR);
	set_resolution(&res);
	ft_free_tab((void **)splitted_line);
}

static void		fill_textures(char **splitted_line)
{
	if (splitted_line[0][0] == 'N')
	{
		set_no_texture(malloc_texture(splitted_line[1]));
		ft_free_tab((void **)splitted_line);
	}
	else if (splitted_line[0][0] == 'S' && ft_strlen(splitted_line[0]) == 1)
	{
		set_sprite_texture(malloc_texture(splitted_line[1]));
		ft_free_tab((void **)splitted_line);
	}
	else if (splitted_line[0][0] == 'S' && ft_strlen(splitted_line[0]) == 2)
	{
		set_so_texture(malloc_texture(splitted_line[1]));
		ft_free_tab((void **)splitted_line);
	}
	else if (splitted_line[0][0] == 'W')
	{
		set_we_texture(malloc_texture(splitted_line[1]));
		ft_free_tab((void **)splitted_line);
	}
	else if (splitted_line[0][0] == 'E')
	{
		set_ea_texture(malloc_texture(splitted_line[1]));
		ft_free_tab((void **)splitted_line);
	}
}

static void		fill_ceilling_color(char **splitted_line)
{
	int		index;
	t_color	color;

	index = 0;
	color.r = (unsigned char)ft_atoi(splitted_line[1]);
	while (ft_is_digit(splitted_line[1][index]) == true)
		index++;
	index++;
	color.g = (unsigned char)ft_atoi(splitted_line[1] + index);
	while (ft_is_digit(splitted_line[1][index]) == true)
		index++;
	index++;
	color.b = (unsigned char)ft_atoi(splitted_line[1] + index);
	g_engine->map_params->ceiling_color = (t_color *)malloc(sizeof(t_color));
	if (ceiling_color() == NULL)
		error_exit(MALLOC_ERROR);
	set_ceiling_color(&color);
	ft_free_tab((void **)splitted_line);
}

static void		fill_floor_color(char **splitted_line)
{
	int		index;
	t_color	color;

	index = 0;
	color.r = (unsigned char)ft_atoi(splitted_line[1]);
	while (ft_is_digit(splitted_line[1][index]) == true)
		index++;
	index++;
	color.g = (unsigned char)ft_atoi(splitted_line[1] + index);
	while (ft_is_digit(splitted_line[1][index]) == true)
		index++;
	index++;
	color.b = (unsigned char)ft_atoi(splitted_line[1] + index);
	g_engine->map_params->floor_color = (t_color *)malloc(sizeof(t_color));
	if (floor_color() == NULL)
		error_exit(MALLOC_ERROR);
	set_floor_color(&color);
	ft_free_tab((void **)splitted_line);
}

void			fill_params(char *param_line)
{
	char	**splitted_line;

	if (is_double_param(param_line) == true)
		error_exit(DOUBLE_PARAM_ERROR);
	splitted_line = ft_split(param_line, ' ');
	if (splitted_line[0][0] == 'R')
		fill_resolution(splitted_line);
	else if (splitted_line[0][0] == 'N' || splitted_line[0][0] == 'S' ||
	splitted_line[0][0] == 'W' || splitted_line[0][0] == 'E')
		fill_textures(splitted_line);
	else if (splitted_line[0][0] == 'C')
		fill_ceilling_color(splitted_line);
	else if (splitted_line[0][0] == 'F')
		fill_floor_color(splitted_line);
}
