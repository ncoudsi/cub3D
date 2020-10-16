/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:58:50 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/15 14:22:30 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	file_overwrite(char *path)
{
	int	fd;

	fd = -1;
	if (ft_is_valid_file_path(path))
		fd = open(path, O_WRONLY | O_TRUNC);
	return (fd);
}

static int	file_append(char *path)
{
	int	fd;

	fd = -1;
	if (ft_is_valid_file_path(path))
		fd = open(path, O_WRONLY | O_APPEND);
	return (fd);
}

static int	file_create(char *path)
{
	int	fd;

	fd = -1;
	if (ft_is_valid_file_path(path) == false)
		fd = open(path, O_WRONLY | O_APPEND | O_CREAT, 00700);
	return (fd);
}

/*
**	Printing a string in a file. The actual file
**	is defined with a path rather than a file descriptor.
*/

void		ft_putstr_fp(char *path, char *str, char *mode)
{
	int	fd;

	fd = -1;
	if (str == NULL || mode == NULL || path == NULL)
		return ;
	if (ft_strcmp(mode, "OVERWRITE"))
		fd = file_overwrite(path);
	else if (ft_strcmp(mode, "APPEND"))
		fd = file_append(path);
	else if (ft_strcmp(mode, "CREATE"))
		fd = file_create(path);
	if (fd == -1)
	{
		ft_putstr_fd(2, "Invalid file path in ft_print_str_tab_fp().\n");
		return ;
	}
	write(fd, str, ft_strlen(str));
	close(fd);
}
