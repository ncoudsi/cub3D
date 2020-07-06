/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:31:56 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int main()
{
    int fd;
    t_map_params    *map_params;

    fd = open("./ressources/map.cub", O_RDONLY);
    if (fd == -1)
        error_exit(FILE_ERROR);
    map_params = malloc_map_params();
    fill_map_params(fd, map_params);
    free_map_params(map_params);
    return(0);
}