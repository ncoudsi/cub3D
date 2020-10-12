/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 10:46:35 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Checking that we run the game with proper arguments.
*/

void	args_check(int ac, char **av)
{
	if (ac < 2 || ac > 3)
		error_exit(ARG_ERROR);
	if (ac == 3 && ft_strcmp(av[2], "--save") == false)
		error_exit(ARG_ERROR);
	else if (ac == 3)
		set_bmp_save(true);
}

int		main(int ac, char **av)
{
	g_engine = malloc_engine();
	args_check(ac, av);
	load_game(cube_file_fd(av[1]));
	run_game();
	close_game();
	return (0);
}
