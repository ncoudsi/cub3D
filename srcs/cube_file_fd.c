/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_file_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:28:03 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 12:08:58 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking the validity of the file name. Must contain at least one
**	alphanumeric character.
*/

static t_bool	is_valid_name(char *cub_file)
{
	int	index;
	int	len;

	len = ft_strlen(cub_file) - 4;
	index = len;
	while (index > 0 && cub_file[index] != '/')
	{
		if (ft_is_alpha_num(cub_file[index]) == true)
			return (true);
		index--;
	}
	return (false);
}

/*
**	Checking that the file is a .cub file and has a valid file name.
*/

static t_bool	is_valid_cub_file(char *cub_file)
{
	int		len;

	len = ft_strlen(cub_file);
	if (len < 5)
		return (false);
	else if (ft_strcmp(cub_file + len - 4, ".cub") == false)
		return (false);
	else if (is_valid_name(cub_file) == false)
		return (false);
	return (true);
}

/*
**	Returning the file descriptor of a file after checking his validity.
*/

int				cube_file_fd(char *cub_file)
{
	int		fd;

	fd = open(cub_file, O_RDONLY);
	if (fd == -1)
		error_exit(FILE_ERROR);
	if (is_valid_cub_file(cub_file) == false)
		error_exit(FILE_ERROR);
	return (fd);
}
