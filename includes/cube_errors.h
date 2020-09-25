/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_errors.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:38:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/08 11:38:19 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_ERRORS_H
# define CUBE_ERRORS_H

/*
**	BASIC ERRORS
*/

# define ERRORS_NBR 10
# define MAP_ENTRY 0
# define RES_ERROR 1
# define TEX_ERROR 2
# define COL_ERROR 3
# define MAP_ERROR 4
# define FILE_ERROR 5
# define MISS_PARAM_ERROR 6
# define DOUBLE_PARAM_ERROR 7
# define MALLOC_ERROR 8
# define OVERFLOW_ERROR 9

void	error_exit(int error_code);

/*
**	VECTOR ERRORS
*/

# define VECTOR_ERRORS_NBR 1
# define PIXEL_POS_ERROR 0

void	error_exit_vector(t_int_vector pos, int error_code);
#endif
