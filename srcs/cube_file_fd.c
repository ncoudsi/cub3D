/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_file_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:28:03 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/06 13:49:18 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_bool	is_valid_cub_file(char *cub_file)
{
	int		len;
	char	*copy;

	len = ft_strlen(cub_file);
	copy = ft_strdup(cub_file + len - 4);
	if (len < 4)
	{
		free(copy);
		return (false);
	}
	if (ft_strcmp(copy, ".cub") == false)
	{
		free(copy);
		return (false);
	}
	free(copy);
	return (true);
}

int		cube_file_fd(char *cub_file)
{
	int		fd;

	fd = open(cub_file, O_RDONLY);
	if (fd == -1)
		error_exit(FILE_ERROR);
	if (is_valid_cub_file(cub_file) == false)
		error_exit(FILE_ERROR);
	return (fd);
}
