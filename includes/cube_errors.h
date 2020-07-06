/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_errors.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:29:07 by ncoudsi           #+#    #+#             */
/*   Updated: 2020/07/06 13:29:07 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_ERRORS_H
# define CUBE_ERRORS_H

# define ERRORS_NBR 7
# define MAP_ENTRY 0
# define RES_ERROR 1
# define TEX_ERROR 2
# define COL_ERROR 3
# define MAP_ERROR 4
# define FILE_ERROR 5
# define MISS_PARAM_ERROR 6

void    error_exit(int error_code);

#endif