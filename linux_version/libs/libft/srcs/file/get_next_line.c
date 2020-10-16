/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:59:27 by ldutriez          #+#    #+#             */
/*   Updated: 2020/10/16 09:10:06 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Creating a line from storage.
*/

static char	*create_line(char *storage)
{
	int		index;
	char	*result;

	index = 0;
	while (storage[index] != '\0' && storage[index] != '\n')
		index++;
	result = ft_strsub(storage, 0, index);
	return (result);
}

/*
**	Removing a line from storage, so it remains only the surplus.
*/

static void	remove_line(char **storage)
{
	int		index;
	char	*tmp;
	int		new_len;

	index = 0;
	tmp = *storage;
	while (tmp[index] != '\0' && tmp[index] != '\n')
		index++;
	new_len = ft_strlen(tmp) - index -1;
	if (new_len <= 0)
		*storage = NULL;
	else
		*storage = ft_strsub(tmp, index + 1, new_len);
	free(tmp);
}

/*
**	Getting the next line of a file and store it in a string. We consider a line
**	as an undefined number of characters terminated with '\n'. The function
**	returns 1 if a line has been found, 0 if the enf of file has beem reached
**	and -1 if an error occured.
*/

int			get_next_line(int fd, char **line)
{
	static char	*storage = NULL;
	char		*buffer;
	int			read_return;

	read_return = 1;
	if (line == NULL || fd < 0 || BUFFER_SIZE <= 0)
		return (IS_AN_ERROR);
	buffer = ft_strnew(BUFFER_SIZE);
	if (buffer == NULL)
		return (IS_AN_ERROR);
	while (ft_is_charset_in_str(storage, "\n") == false &&
	read_return != IS_END_OF_FILE)
	{
		read_return = read(fd, buffer, BUFFER_SIZE);
		if (read_return == IS_AN_ERROR)
			return (IS_AN_ERROR);
		ft_str_add_suffix(&storage, buffer);
	}
	free(buffer);
	*line = create_line(storage);
	remove_line(&storage);
	if (read_return == IS_END_OF_FILE)
		return (IS_END_OF_FILE);
	return (IS_A_LINE);
}