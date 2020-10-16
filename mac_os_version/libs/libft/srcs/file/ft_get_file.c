/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:34:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/16 09:20:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Opening a file and getting its datas line by line. Storing it in a char **
**	and returning it. If the path to the file is incorrect, returning NULL.
*/

char	**ft_get_file(char *path)
{
	char	**result;
	int		fd;
	char	*line;

	result = NULL;
	fd = open(path, O_RDONLY);
	if (fd < 3)
	{
		ft_putstr_fd(2, "Error : Invalid fd\n");
		return (NULL);
	}
	line = NULL;
	while (get_next_line(fd, &line) > 0)
	{
		ft_add_to_tab((void *)line, (void ***)&result);
	}
	ft_add_to_tab((void *)line, (void ***)&result);
	close(fd);
	return (result);
}
