/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_parsing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:58:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 11:59:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static t_bool	is_color_value(char *color_line, int index)
{
	int	value;

	value = ft_atoi(color_line + index);
	if (value > 255)
		return (false);
	return (true);
}

static t_bool	is_valid_color(char *color_line)
{
	int	index;
	int	sep_number;

	index = 0;
	sep_number = 0;
	while (color_line[index] != '\0')
	{
		if (ft_is_digit(color_line[index]) == false && color_line[index] != ',')
			return (false);
		else if (color_line[index] == ',')
		{
			sep_number++;
			if (ft_is_digit(color_line[index + 1]) == false)
				return (false);
		}
		else if (ft_is_digit(color_line[index]) == true &&
				is_color_value(color_line, index) == false)
			return (false);
		index++;
	}
	if (sep_number != 2)
		return (false);
	return (true);
}

void			colors_parsing(char **colors_line)
{
	if (ft_tab_len((void **)colors_line) != 2)
		error_exit(COL_ERROR);
	else if (ft_strlen(colors_line[0]) > 1)
		error_exit(COL_ERROR);
	else if (ft_strlen(colors_line[1]) > 11 || ft_strlen(colors_line[1]) < 5)
		error_exit(COL_ERROR);
	else if (is_valid_color(colors_line[1]) == false)
		error_exit(COL_ERROR);
}
