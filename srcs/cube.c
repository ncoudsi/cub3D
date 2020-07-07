/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/07 14:31:10 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int main()
{
    void            *mlx_ptr;
    void            *win_ptr;
    int             fd;
    t_map_params    *map_params;

    fd = open("./ressources/map.cub", O_RDONLY);
    if (fd == -1)
        error_exit(FILE_ERROR);
    map_params = malloc_map_params();
    fill_map_params(fd, map_params);
    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, map_params->resolution->x,
    map_params->resolution->y, "LOL CA MARCHE ?");
    (void)win_ptr;
    mlx_key_hook(win_ptr, &key_handler, NULL);
    mlx_loop(mlx_ptr);
    free_map_params(map_params);
    return (0);
}