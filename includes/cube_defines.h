/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_defines.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:42:14 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/09/29 13:42:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_DEFINES_H
# define CUBE_DEFINES_H

/*
**	RESOLUTION
*/

# define MIN_RES_X 300
# define MIN_RES_Y 300

/*
**	COLOR SORTING
*/

# define RED_INDEX 2
# define GREEN_INDEX 1
# define BLUE_INDEX 0
# define ALPHA_INDEX 3

/*
**	MLX KEY CODES
*/

# define ESC_KEY 65307
# define W_KEY 119
# define S_KEY 115
# define A_KEY 97
# define D_KEY 100
# define RIGHT_ARROW 65363
# define LEFT_ARROW 65361

/*
**	MLX EVENT CODES
*/

# define KEY_PRESS 2
# define KEY_RELEASE 3

/*
**	MINIMAP
*/

# define PLAYER_SIZE 3

/*
**	PLAYER
*/

# define MOVE_SPEED 0.2f

/*
**  RAYCASTING
*/

# define DIR_LENGTH 1.0f
# define PLANE_LENGTH 1.0f

#endif
