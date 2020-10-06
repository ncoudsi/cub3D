/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/06 13:48:12 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

int	main(int ac, char **av)
{
	if (ac < 2 || ac > 3)
		error_exit(ARG_ERROR);
	g_engine = malloc_engine();
	load_game(cube_file_fd(av[1]));
	run_game();
	close_game();
	return (0);
}
