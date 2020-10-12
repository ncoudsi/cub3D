/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 11:46:17 by ncoudsi          ###   ########.fr       */
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

/*
**	Main function of the program. First we allocate memory for the main
**	structure wich is a global. Then we set all the values in the structure.
**	After that, we run the game as a loop that ends only in case of error or
**	when the user decide to quit.
*/

int		main(int ac, char **av)
{
	g_engine = malloc_engine();
	args_check(ac, av);
	load_game(cube_file_fd(av[1]));
	run_game();
	close_game();
	return (0);
}
