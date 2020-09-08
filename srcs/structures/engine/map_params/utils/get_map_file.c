/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:31:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:31:00 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

char    **get_map_file(int fd)
{
    char    **result;
    char    *line;

    result = NULL;
    line = NULL;
    while (get_next_line(fd, &line) > 0)
        ft_add_to_tab((void *)line, (void ***)&result);
    free(line);
    return(result);
}
