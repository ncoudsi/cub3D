/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_defines.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:42:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/08/05 13:03:33 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_DEFINES_H
# define CUBE_DEFINES_H

/*
**	COLOR SORTING
*/

#define	RED_INDEX 2
#define GREEN_INDEX 1
#define BLUE_INDEX 0
#define ALPHA_INDEX 3

/*
**	MLX KEY CODES
*/

#define ESC_KEY 65307
#define W_KEY 119
#define S_KEY 115
#define A_KEY 97
#define D_KEY 100

/*
**	MLX EVENT CODES
*/

#define KEY_PRESS 2
#define KEY_RELEASE 3

/*
**	MINIMAP
*/

#define TILE_COLOR 53, 35, 30
#define WALL_COLOR 165, 47, 12
#define PLAYER_COLOR 47, 216, 60
#define PLAYER_SIZE 10

/*
**	PLAYER
*/

#define MOVE_SPEED 1
#define ROTATION_SPEED 5

#endif
