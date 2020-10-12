/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:33:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/10/12 11:41:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

/*
**	Free everything in the main structure before closing the program. Return an
**	int because key_press() from MLX need an int prototyped function to work.
*/

int	close_game(void)
{
	free_engine();
	exit(EXIT_SUCCESS);
	return (0);
}
