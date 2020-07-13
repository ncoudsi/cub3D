/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:28:00 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/13 15:16:08 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

t_engine	*g_engine = NULL;

int	main(void)
{
	g_engine = malloc_engine();
	fill_map_params(cube_file_fd(), g_engine->map_params);
	run_application();
	free_engine();
	return (0);
}
