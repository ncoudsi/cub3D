/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_parsing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:58:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:04:06 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking the numeric value of a color. Must not exceed 255.
*/

static t_bool	is_color_value(char *color_line, int index)
{
	int	value;

	value = ft_atoi(color_line + index);
	if (value > 255)
		return (false);
	return (true);
}

/*
**	Checking the validity of a color value. First, it must contain only
**	digits or ','. Then, any numeric value must be between 0 and 255.
**	Finaly, it must contain only 2 ','.
*/

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

/*
**	Parsing colors settings. Must have 2 entries (key, color value (r, g, b)).
**	Key must have only 1 character. Then, checking validity of the color value.
*/

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
