/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:03:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/08 15:04:12 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	file_overwrite(char *path)
{
	int	fd;

	fd = -1;
	if (ft_file_exist(path))
		fd = open(path, O_WRONLY | O_TRUNC);
	return (fd);
}

static int	file_append(char *path)
{
	int	fd;

	fd = -1;
	if (ft_file_exist(path))
		fd = open(path, O_WRONLY | O_APPEND);
	return (fd);
}

static int	file_create(char *path)
{
	int	fd;

	fd = -1;
	if (ft_file_exist(path) == false)
		fd = open(path, O_WRONLY | O_APPEND | O_CREAT, 00700);
	return (fd);
}

void		ft_putchar_fp(char *path, char c, char *mode)
{
	int	fd;

	fd = -1;
	if (path == NULL || mode == NULL || path == NULL)
		return ;
	if (ft_strcmp(mode, "OVERWRITE"))
	{
		fd = file_overwrite(path);
	}
	else if (ft_strcmp(mode, "APPEND"))
	{
		fd = file_append(path);
	}
	else if (ft_strcmp(mode, "CREATE"))
	{
		fd = file_create(path);
	}
	if (fd != -1)
		write(fd, &c, 1);
	close(fd);
}
