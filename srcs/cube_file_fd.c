/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_file_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:28:03 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 12:29:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	cube_file_fd()
{
	int	fd;

	fd = open("./ressources/map.cub", O_RDONLY);
	if (fd == -1)
		error_exit(FILE_ERROR);
	return (fd);
}
